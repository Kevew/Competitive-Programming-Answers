#include <bits/stdc++.h>
using namespace std;

char arr[50][50];
int fastest[50][50];
int n,m;

void dfs(int y,int x,int cnt){
	if(y >= 0 && y < n && x >= 0 && x < m){
		if(cnt < fastest[y][x] && arr[y][x] != '*'){
			fastest[y][x] = cnt;
			cnt++;
			if(arr[y][x] == '+'){
				dfs(y+1,x,cnt);
				dfs(y-1,x,cnt);
				dfs(y,x+1,cnt);
				dfs(y,x-1,cnt);
			}else if(arr[y][x] == '|'){
				dfs(y+1,x,cnt);
				dfs(y-1,x,cnt);
			}else{
				dfs(y,x+1,cnt);
				dfs(y,x-1,cnt);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cin >> arr[i][j];
				fastest[i][j] = 99999999;
			}
		}
		dfs(0,0,1);
		if(fastest[n-1][m-1] == 99999999){
			cout << "-1" << endl;
		}else{
			cout << fastest[n-1][m-1] << endl;
		}
		
	}
}
