#include <bits/stdc++.h>
using namespace std;

using ll = long long;

map<ll,ll> valuee;

int arr[100010];

void solve(){
	valuee.clear();
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	vector<ll> dp(n,0);
	ll ans = 0;
	for(int i = 0;i < n;i++){
		if(i > 0){
			dp[i] = dp[i-1];
		}
		dp[i] += valuee[arr[i]];
		valuee[arr[i]] += (i+1);
		ans += dp[i];
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
