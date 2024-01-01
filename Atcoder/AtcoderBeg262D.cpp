#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long arr[200010];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	long long ans = 0;
	for(long long i = 1;i <= n;i++){
		vector<vector<vector<long long>>> dp(n+1, vector<vector<long long>>(i+1, vector<long long>(i,0)));
		dp[0][0][0] = 1;
		for(long long j = 0;j < n;j++){
			for(long long k = 0;k <= i;k++){
				for(long long l = 0;l < i;l++){
					dp[j+1][k][l] = (dp[j+1][k][l]+dp[j][k][l])%MOD;
					if(k < i){
						dp[j+1][k+1][(l+arr[j])%i] = (dp[j+1][k+1][(l+arr[j])%i]+dp[j][k][l])%MOD;
					}
				}
			}
		}
		ans = (ans+dp[n][i][0])%MOD;
	}
	cout << ans << endl;
}
