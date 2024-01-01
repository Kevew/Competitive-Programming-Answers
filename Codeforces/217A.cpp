#include <bits/stdc++.h>
using namespace std;
 
int arr[1010][1010];
 
int direc[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
 
void dfs(int x,int y,int dir){
	if(x >= 0 && x <= 1000 && y >= 0 && y <= 1000){
		if(arr[x][y] == 1){
			arr[x][y] = 0;
			dfs(x+1,y,1);
			dfs(x-1,y,2);
			dfs(x,y+1,0);
			dfs(x,y-1,3);
		}else{
			dfs(x+direc[dir][0],y+direc[dir][1],dir);
		}
	}
}
 
int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		arr[a][b] = 1;
	}
	
	int ans = 0;
	for(int i = 0;i < 1000;i++){
		for(int j = 0;j < 1000;j++){
			if(arr[i][j] == 1){
				dfs(i,j,0);
				ans++;
			}
		}
	}
	cout << ans-1 << endl;
}
