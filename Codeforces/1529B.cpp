#include <bits/stdc++.h>
using namespace std;

int arr[100010];

void solve(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
	}
	sort(arr+1,arr+1+n);
	int cnt = 1e9,ans = 1;
	for(int i = 2;i <= n;i++){
		cnt = min(cnt,arr[i]-arr[i-1]);
		if(cnt < arr[i]){
			break;
		}
		ans++;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
