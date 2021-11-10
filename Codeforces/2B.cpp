#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010][2];
bool path[1010][1010][2];
int n,k;

void curr(int x,int y){
	if(x == 1 && y == 1){
		return;
	}
	if(path[x][y][k]){
		curr(x-1,y);
		cout << 'D';
	}else{
		curr(x,y-1);
		cout << 'R';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 2;i <= n;i++){
		dp[0][i][0] = dp[0][i][1] = dp[i][0][0] = dp[i][0][1] = INT_MAX;
	}
	int a;
	int x = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a;
			if(!a){
				x = i;
			}else{
				while(a%2==0){
					dp[i][j][0]++;
					a/=2;
				}
				while(a%5==0){
					dp[i][j][1]++;
					a/=5;
				}
			}
			for(k = 0;k < 2;k++){
				if((path[i][j][k]=dp[i-1][j][k] < dp[i][j-1][k])){
					dp[i][j][k] += dp[i-1][j][k];
				}else{
					dp[i][j][k] += dp[i][j-1][k];
				}
			}
		}
	}
	k = (dp[n][n][1]<dp[n][n][0]);
	if(x && dp[n][n][k] >= 1){
		cout << "1" << endl;
		for(int i = 2;i <= x;i++){
			cout << "D"; 
		}
		for(int i = 2;i <= n;i++){
			cout << "R";
		}
		for(int i = x+1;i <= n;i++){
			cout << "D"; 
		}
		cout << endl;
	}else{
		cout << dp[n][n][k] << endl;
		curr(n,n);
		cout << endl;
	}
	
}
