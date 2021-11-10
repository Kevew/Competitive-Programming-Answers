#include <bits/stdc++.h>
using namespace std;

int grid[2010][2010];
int dp[2010][2010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(dp, 0x3f, sizeof(dp));
	int h,w;
	cin >> h >> w;
	char curr;
	for(int i = 1;i <= h;i++){
		for(int j = 1;j <= w;j++){
			cin >> curr;
			if(curr == '+'){
				grid[i][j] = 1;
			}else{
				grid[i][j] = -1;
			}
		}
	}
	dp[h][w] = 0;
	for(int i=h;i>0;i--){
		for(int j=w;j>0;j--){
       		if(i == h && j == w){
                continue;
            }
            dp[i][j] = max(grid[i + 1][j] - dp[i + 1][j], grid[i][j + 1] - dp[i][j + 1]);
		}
	}
	for(int i = 1;i <= h;i++){
		for(int j = 1;j <= w;j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	if(dp[1][1] > 0){
		cout << "Takahashi" << endl;
	}else if(dp[1][1] < 0){
		cout << "Aoki" << endl;
	}else{
		cout << "Draw" << endl;
	}
}
