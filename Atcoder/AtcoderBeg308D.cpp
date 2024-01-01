#include <bits/stdc++.h>
using namespace std;

string arr[501];
bool vis[501][501];
string snuke = "snuke";
int n,m;

bool work = false;

void dfs(int x, int y, int cnt){
	if(x < 0 || x >= n || y < 0 || y >= m){
		return;
	}
	if(work){
		return;
	}
	if(snuke[cnt] == arr[x][y] && !vis[x][y]){
		vis[x][y] = true;
		if(x == n-1 && y == m-1){
			work = true;
			return;
		}
		dfs(x+1,y,(cnt+1)%5);
		dfs(x,y+1,(cnt+1)%5);
		dfs(x-1,y,(cnt+1)%5);
		dfs(x,y-1,(cnt+1)%5);
	}
}

int main(){
	cin >> n >> m;
	
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	dfs(0,0,0);
	if(work){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
