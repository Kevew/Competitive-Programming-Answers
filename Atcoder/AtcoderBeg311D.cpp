#include <bits/stdc++.h>
using namespace std;

string arr[210];
bool vis[210][210];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int x,int y,bool moving,int currdir){
	if(moving){
		int a = x + dir[currdir][0];
		int b = y + dir[currdir][1];
		if(arr[a][b] == '.'){
			vis[x][y] = true;
			dfs(a,b,moving,currdir);
			return;
		}else{
			moving = false;
		}
	}
	if(!vis[x][y]){
		vis[x][y] = true;
		for(int i = 0;i < 4;i++){
			dfs(x,y,true,i);
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	dfs(1,1,false,-1);
	
	int ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(vis[i][j]){
				ans++;
			}
		}
	}
	cout << ans << endl;
}
