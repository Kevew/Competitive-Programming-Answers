#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	vector<long long> dp(n+2);
	dp[0] = 1;
	for(int i = 0;i < n;i++){
		for(int j = i-1;;j--){
			dp[i+2] = (dp[i+2]+dp[j+1])%MOD;
			if(j == -1 || s[i] == s[j]){
				break;
			}
		}
	}
	long long ans = 0;
	for(int i = 2;i < n+2;i++){
		ans += dp[i];
	}
	cout << ans%MOD << endl;
}
