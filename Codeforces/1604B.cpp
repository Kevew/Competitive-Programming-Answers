#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	if(n%2 == 0){
		cout << "YES" << endl;
	}else{
		bool ans = false;
		for(long long i = 0;i < n-1;i++){
			if(arr[i] >= arr[i+1]){
				ans = true;
			}
		}
		if(ans){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
/*
1
2
2 1
*/

