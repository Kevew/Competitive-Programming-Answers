#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long a[3010],b[3010];
long long dp[3010][3010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> a[i];
	}
	for(long long i = 0;i < n;i++){
		cin >> b[i];
	}
	dp[0][a[0]]++;
	dp[0][b[0]+1]--;
	for(long long i = 1;i < n;i++){
		long long curr = 0;
		for(long long j = 0;j <= 3010;j++){
			curr = (curr+dp[i-1][j])%MOD;
			if(j <= b[i]){
				dp[i][max(j,a[i])] = (dp[i][max(j,a[i])]+curr)%MOD;
				dp[i][b[i]+1] = (dp[i][b[i]+1]-curr)%MOD;
			}
		}
	}
	long long ans = 0,curr = 0;
	for(long long i = 0;i <= 3010;i++){
		curr = (curr+dp[n-1][i])%MOD;
		ans = (ans+curr)%MOD;
	}
	cout << ans << endl;
}
