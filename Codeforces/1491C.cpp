#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll dp[5010],arr[5010];

void solve(){
	memset(dp,0,sizeof(dp));
	ll n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	ll ans = 0;
	ll temp;
	for(int i = 0;i < n;i++){
		temp = dp[i];
		if(temp < arr[i]-1){
			ans += arr[i]-1-temp;
			temp += arr[i]-1-temp;
		}
		dp[i+1] += temp-arr[i]+1;
		if(i+2 < n){
			for(int j = i+2;j < min(n,i+arr[i]+1);j++){
				dp[j]++;
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
