#include <bits/stdc++.h>
using namespace std;

int h,w;

char arr[100][100];
int fastest[100][100];
long long ans = 0;

void dfs(int x,int y,long long curr){
	if(x >= 0 && x < h && y >= 0 && y < w){
		if(arr[x][y] == '.'){
			if(fastest[x][y] > curr){
				fastest[x][y] = curr;
				ans = max(ans,curr);
				dfs(x,y+1,curr+1);
				dfs(x+1,y,curr+1);
			}
		}
	}
}

int main(){
	cin >> h >> w;
	for(int i = 0;i < h;i++){
		for(int j = 0;j < w;j++){
			cin >> arr[i][j];
			fastest[i][j] = 1e9;
		}
	}
	dfs(0,0,0);
	cout << ans+1 << endl;
}

