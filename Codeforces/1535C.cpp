#include <bits/stdc++.h>
using namespace std;

long long dp[200010][2];

void solve(){
	string a;
	cin >> a;
	a.insert(a.begin(),0);
	int n = a.size();
	long long ans = 0;
	for(int i = 1;i <= n;i++){
		dp[i][0] = 0;
		dp[i][1] = 0;
		if(a[i] == '0' || a[i] == '?') dp[i][0] = dp[i-1][1]+1;
		if(a[i] == '1' || a[i] == '?') dp[i][1] = dp[i-1][0]+1;
		ans += max(dp[i][0],dp[i][1]);
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
