#include <bits/stdc++.h>
using namespace std;

int dp[1000010];

long long MOD = 998244353;

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = i+i;j <= n;j+=i){
			dp[j]++;
		}
	}
	int temp = 1;
	for(int i = 1;i <= n;i++){
		dp[i] = (dp[i]+temp)%MOD;
		temp = (temp+dp[i])%MOD;
	}
	cout << dp[n] << endl;
}
