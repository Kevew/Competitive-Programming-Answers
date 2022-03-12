#include <bits/stdc++.h>
using namespace std;

int arr[110];

void solve(){
	int n,l,r,k;
	cin >> n >> l >> r >> k;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int ans = 0,cnt = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] >= l && arr[i] <= r){
			if(arr[i]+cnt > k){
				break;
			}else{
				cnt += arr[i];
				ans++;
			}
		}
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
