#include <bits/stdc++.h>
using namespace std;

long long paths[410][410];
long long dp[410][410];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin >> n >> m;
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= n;j++){
			dp[i][j] = 1e18;
		}
	}
	long long a,b,c;
	for(int i = 0;i < m;i++){
		cin >> a >> b >> c;
		a--,b--;
		dp[a][b] = c;
	}
	long long ans = 0;
	for(int k = 0;k < n;k++){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
				if(dp[i][j] != 1e18 && i != j){
					ans += dp[i][j];
				}
			}
		}
	}
	cout << ans << endl;
}
