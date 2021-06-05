#include <bits/stdc++.h>
using namespace std;

int R,G,B;
int r[210],g[210],b[210];
long dp[210][210][210];

long check(int ra,int ga,int ba){
	if(dp[ra][ga][ba] != -1){
		return dp[ra][ga][ba];
	}
	long best = 0;
	if(ra < R && ga < G){
		best = max(best,r[ra]*g[ga] + check(ra+1,ga+1,ba));
	}
	if(ra < R && ba < B){
		best = max(best,r[ra]*b[ba] + check(ra+1,ga,ba+1));
	}
	if(ga < G && ba < B){
		best = max(best,g[ga]*b[ba] + check(ra,ga+1,ba+1));
	}
	
	return dp[ra][ga][ba] = best;
}

int main(){
	cin >> R >> G >> B;
	for(int i = 0;i < R;i++){
		cin >> r[i];
	}
	for(int i = 0;i < G;i++){
		cin >> g[i];
	}
	for(int i = 0;i < B;i++){
		cin >> b[i];
	}
	sort(r,r+R,greater<int>());
	sort(g,g+G,greater<int>());
	sort(b,b+B,greater<int>());
	for(int i = 0;i <= 200;i++){
		for(int j = 0;j <= 200;j++){
			for(int x = 0;x <= 200;x++){
				dp[i][j][x] = -1;
			}
		}
	}
	long ans = check(0,0,0);
	cout << ans << endl;
}
