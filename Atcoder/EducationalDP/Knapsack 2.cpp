#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL<<60;

int main(){
	long long n,w;
	cin >> n >> w;
	long long a[n],b[n];
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	
	vector<vector<long long>> dp(n+1,vector<long long>(200010+1,INF));
	dp[0][0] = 0;
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j <= 100010;j++){
			dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
			if(dp[i][j] != INF){
				dp[i+1][j+b[i]] = min(dp[i+1][j+b[i]],dp[i][j] + a[i]);
				if(dp[i+1][j+b[i]] <= w){
					ans = max(ans,j+b[i]);
				}
			}
		}
	}
	cout << ans << endl;
}
