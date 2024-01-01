#include <bits/stdc++.h>
using namespace std;

long long arr[110][2];
long long dp[110][200010];

int main(){
	long long n,w;
	cin >> n >> w;
	for(long long i = 0;i < n;i++){
		cin >> arr[i][0] >> arr[i][1];
	}
	memset(dp,-1,sizeof(dp));
	dp[0][0] = 0;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j <= w;j++){
			if(dp[i][j] != -1){
				dp[i+1][j+arr[i][0]] = max(dp[i+1][j+arr[i][0]],dp[i][j] + arr[i][1]);
				dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
			}
		}
	}
	long long ans = 0;
	for(long long i = 0;i <= w;i++){
		ans = max(ans, dp[n][i]);
	}
	cout << ans << endl;
}
