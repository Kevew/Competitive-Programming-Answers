#include <bits/stdc++.h>
using namespace std;

long long dp[4000010],check[4000010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin >> n >> m;
	dp[n] = 1;
	check[n] = 1;
	for(int i = n-1;i >= 1;i--){
		for(int j = 2;i*j <= n;j++){
			dp[i] = (dp[i]+check[i*j] - check[(i+1)*j <= n?(i+1)*j:n+1])%m;
		}
		dp[i] = (dp[i]+check[i+1])%m;
		check[i] = (check[i+1]+dp[i])%m;
	}
	cout << dp[1] << endl;
	
}
