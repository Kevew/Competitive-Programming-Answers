#include <bits/stdc++.h>
using namespace std;

long long prefixa[200010];
long long prefixb[200010];

long long hashfunc(long long x) {
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x;
}

int main(){
	map<int,bool> containsa;
	map<int,bool> containsb;
	int n;
	cin >> n;
	long long input;
	prefixa[0] = 0;
	prefixa[1] = 0;
	for(int i = 0;i < n;i++){
		cin >> input;
		prefixa[i+1] = prefixa[i];
		if(!containsa[input]){
			containsa[input] = true;
			prefixa[i+1] += hashfunc(input);
		}
	}
	
	for(int i = 0;i < n;i++){
		cin >> input;
		prefixb[i+1] = prefixb[i];
		if(!containsb[input]){
			containsb[input] = true;
			prefixb[i+1] += hashfunc(input);
		}
	}
	int q;
	cin >> q;
	for(int i = 0;i < q;i++){
		int a,b;
		cin >> a >> b;
		if(prefixa[a] == prefixb[b]){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}
