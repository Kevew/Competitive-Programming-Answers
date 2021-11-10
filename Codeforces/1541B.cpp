#include <bits/stdc++.h>
using namespace std;

int arr[100010];

void solve(){
	memset(arr,0,sizeof(arr));
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		int sta = arr[i]-i%arr[i];
		for(int j = sta;j < i;j+=arr[i]){
			if(arr[i]*arr[j]==i+j){
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
