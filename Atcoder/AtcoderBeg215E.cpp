#include <bits/stdc++.h>
using namespace std;

int dp[2][1<<10][10];
const int MOD = 998244353;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int now = 0;
	for(int i = 0;i < n;i++){
		int nxt = 1-now;
		for(int j = 0;j < (1<<10);j++){
			for(int x = 0;x < 10;x++){
				dp[nxt][j][x] = 0;
			}
		}
		int curr = s[i]-'A';
		for(int j = 0;j < (1<<10);j++){
			for(int x = 0;x < 10;x++){
				if((j>>curr)&1){
					if(x == curr){
						dp[nxt][j][curr] = (dp[nxt][j][curr]+dp[now][j][curr])%MOD;
					}
				}else{
					dp[nxt][j|(1<<curr)][curr] = (dp[nxt][j|(1<<curr)][curr]+dp[now][j][x])%MOD;
				}
				dp[nxt][j][x] = (dp[nxt][j][x]+dp[now][j][x])%MOD;
			}
		}
		dp[nxt][(1<<curr)][curr] = (dp[nxt][(1<<curr)][curr]+1)%MOD;
		now = nxt;
	}
	long long ans = 0;
	for(int i = 0;i < (1<<10);i++){
		for(int j = 0;j < 10;j++){
			ans = (ans+dp[now][i][j])%MOD;
		}
	}
	cout << ans << endl;
}
