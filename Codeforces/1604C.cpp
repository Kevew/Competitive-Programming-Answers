#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(long long i = 0;i < min(100LL,n);i++){
		bool check = false;
		for(long long j = 1;j <= i+1;j++){
			if(arr[i]%(j+1) != 0){
				check = true;
			}
		}
		if(!check){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
