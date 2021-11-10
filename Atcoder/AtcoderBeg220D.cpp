#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long dp[100010][11];
long long arr[100010];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	dp[0][arr[0]] = 1;
	for(long long i = 1;i < n;i++){
		for(long long j = 0;j <= 9;j++){
			dp[i][(j+arr[i])%10] = (dp[i][(j+arr[i])%10]+dp[i-1][j])%MOD;
			dp[i][(j*arr[i])%10] = (dp[i][(j*arr[i])%10]+dp[i-1][j])%MOD;
		}
	}
	long long ans = 0;
	for(long long i = 0;i <= 9;i++){
		cout << dp[n-1][i] << endl;
	}
}
