#include <bits/stdc++.h>
using namespace std;

int solve(){
	long long n;
	cin >> n;
	int j = -1;
	for(int i = 0;i <= 10;i++){
		long long curr = pow(10,i);
		if(curr > n){
			j = i-1;
			break;
		}
	}
	long long curr = pow(10,j);
	cout << n-curr << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
