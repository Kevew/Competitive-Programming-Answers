#include<bits/stdc++.h>
using namespace std;

int n,dp[105][105][30],add[30][30],m,ans=-1e9;
string s;

int main(){
	ios_base::sync_with_stdio(0);
	cin >> s >> m;
	cin >> n;
	for(int i=0;i<n;i++){
		char a,b;
		int c;
		cin >> a >> b >> c;
		a-='a',b-='a';
		add[a][b]=c;
	}
	for(int i=0;i<105;i++)for(int j=0;j<105;j++)for(int k=0;k<30;k++)dp[i][j][k]=-1e9;
	for(int i=0;i<26;i++)dp[0][(i!=(s[0]-'a'))][i]=0;
	for(int i=1;i<s.size();i++)
		for(int j=0;j<=m;j++)
			for(int k=0;k<26;k++)
				for(int l=0;l<26;l++)
					dp[i][j+(l!=s[i]-'a')][l] = max(dp[i][j+(l!=s[i]-'a')][l],dp[i-1][j][k]+add[k][l]);
	for(int i=0;i<=m;i++)
		for(int j=0;j<26;j++)
			ans=max(ans,dp[s.size()-1][i][j]);
	cout << ans << endl;
}
