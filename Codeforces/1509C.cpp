#include <bits/stdc++.h>
 
using namespace std;
 
long long n,a[2069],dp[2069][2069];
 
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i+1];
	}
	sort(a+1,a+n+1);
	for(int i = 1;i <= n;i++){
		for(int j = i-1;j > 0;j--){
			dp[j][i] = min(dp[j+1][i],dp[j][i-1])+a[i]-a[j];
		}
	}
	cout << dp[1][n];
}
