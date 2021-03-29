#include <bits/stdc++.h>
using namespace std;

int p[2010][3];
int v[2010][3];
int dp[10010];

int N,T,ans = 0;

int check(){
	memset(dp,-1,sizeof(dp));
	dp[0] = 0;
	for(int i = 0;i < N;i++){
		for(int j = T;j >= 0;j--){
			for(int x = 0;x < 3;x++){
				if(T >= j+p[i][x] && 0 <= dp[j]){
					dp[j+p[i][x]] = max(dp[j+p[i][x]],dp[j]+v[i][x]);
				}
			}
		}
	}
  	for(int i = 0;i <= T; i++){
  		ans = max(ans, dp[i]);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> T;
	for(int i = 0;i < N;i++){
		cin >> p[i][0] >> v[i][0] >> p[i][1] >> v[i][1] >> p[i][2] >> v[i][2];
	}
	cout << check() << endl;
}
