#include <bits/stdc++.h>
using namespace std;

map<long long,vector<pair<long long,long long>>> arr;
long long dp[100010][5];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	memset(dp,-1,sizeof(dp));
	dp[0][0] = 0;
	long long n;
	cin >> n;
	long long last = 0;
	for(long long i = 0;i < n;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		arr[a].push_back({b,c});
		last = max(last,a);
	}
	for(long long i = 0;i <= 1e5;i++){
		for(auto j: arr[i]){
			if(dp[i][j.first] != -1){
				dp[i][j.first] += j.second;
			}
		}
		for(long long j = 0;j <= 4;j++){
			dp[i+1][max(j-1,0LL)] = max(dp[i+1][max(j-1,0LL)],dp[i][j]);
			dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
			dp[i+1][min(j+1,4LL)] = max(dp[i+1][min(j+1,4LL)],dp[i][j]);
		}
	}
	
	long long ans = 0;
	for(long long j = 0;j <= 4;j++){
		ans = max(ans,dp[last][j]);
	}
	cout << ans << endl;
}
