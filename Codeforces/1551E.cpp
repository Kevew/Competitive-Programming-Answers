#include <bits/stdc++.h>
using namespace std;

int arr[2010];
int dp[2010][2010];

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= n;j++){
			dp[i][j] = 0;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
			dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j] + (arr[i] == j+1?1:0));
		}
	}
	
	int ans = -1;
	for(int i = n;i >= 0;i--){
		if(dp[n][i] >= m){
			ans = n-i;
			break;
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
