#include <bits/stdc++.h>
using namespace std;

long long arr[2010];
long long dp[2010][2010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= m;j++){
			dp[i][j] = -1e18;
		}
	}
	dp[0][0] = 0;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j <= m;j++){
			if(dp[i][j] != -1e18){
				dp[i+1][j+1] = dp[i][j] + arr[i]*(j+1);
			}
			dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
		}
	}
	cout << dp[n][m] << endl;
}
