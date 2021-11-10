#include <bits/stdc++.h>
using namespace std;

int arr[51];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int ans = 0;
	if(arr[0] != 1){
		ans++;
	}
	if(arr[n-1] != n){
		ans++;
	}
	if(arr[0] == n && arr[n-1] == 1){
		ans++;
	}
	if(ans == 0){
		for(int i = 1;i < n-1;i++){
			if(arr[i] != i+1){
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
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
