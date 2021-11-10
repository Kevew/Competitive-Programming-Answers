#include <bits/stdc++.h>
using namespace std;

int fastestposition[9][9];

void dfs(int x,int y,int curr){
	if(x <= 0 || x > 8 || y <= 0 || y > 8){
		return;
	}
	if(fastestposition[x][y] > curr){
		fastestposition[x][y] = curr;
		dfs(x+2,y+1,curr+1);
		dfs(x+1,y+2,curr+1);
		dfs(x+2,y-1,curr+1);
		dfs(x+1,y-2,curr+1);
		dfs(x-2,y+1,curr+1);
		dfs(x-1,y+2,curr+1);
		dfs(x-2,y-1,curr+1);
		dfs(x-1,y-2,curr+1);
	}
}

int main(){
	for(int i = 0;i <= 8;i++){
		for(int j = 0;j <= 8;j++){
			fastestposition[i][j] = 1e9;
		}
	}
	int startx,starty;
	cin >> startx >> starty;
	int endx,endy;
	cin >> endx >> endy;
	dfs(startx,starty,0);
	cout << fastestposition[endx][endy] << endl;
}
