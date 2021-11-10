#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n = 0;
	cin >> n;
	long long i;
	for(i = 0;i <= 100000;i++){
		if((i*i)+1 > n){
			break;
		}
	}
	i -= 1;
	long long temp = ((i*i)+1)+(i);
	if(temp >= n){
		cout << (temp-(i*i)+1)-(temp-n)-1 << " " << i+1 << endl;
	}else{
		long long curr = temp+i;
		cout << i+1 << " " << (curr-n)+1 << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
