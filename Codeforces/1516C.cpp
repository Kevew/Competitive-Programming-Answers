#include <bits/stdc++.h>
using namespace std;

int arr[110];
int n;

bool check(){
	int s = 0;
	for(int i = 0;i < n;i++){
		s += arr[i];
	}
	if(s%2){
		return 0;
	}
	bitset<200010> b;
	b[0] = 1;
	for(int i = 0;i < n;i++){
		b |= (b<<arr[i]);
	}
	return b[s/2];
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	if(check()){
		pair<int,int> mn(110,0);
		for(int i = 0;i < n;i++){
			mn = min(mn,make_pair(__builtin_ctz(arr[i]),i+1));
		}
		cout << "1" << endl << mn.second << endl;
	}else{
		cout << "0" << endl;
	}
}
