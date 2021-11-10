#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
set<vector<string>> check;
int n,ans = 0;

int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

bool valid(int x,int y){
	return x >= 0 && x < n && y >= 0 && y < n;
}

void dfs(int num){
	if(check.find(grid) != check.end()){
		return;
	}
	check.insert(grid);
	if(num == 0){
		ans++;
		return;
	}
	
	vector<pair<int,int>> next;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(grid[i][j] == '.'){
				bool check = false;
				for(int x = 0;x < 4;x++){
					int f = dir[x][0]+i;
					int s = dir[x][1]+j;
					if(valid(f,s) && grid[f][s] == 't'){
						check = true;
					}
				}
				if(check){
					next.push_back({i,j});
				}
			}
		}
	}
	for(pair<int,int> pos:next){
        grid[pos.first][pos.second] = 't';
        dfs(num-1);
        grid[pos.first][pos.second] = '.';
    }
}

int main(){
	int k;
	cin >> n >> k;
	string temp;
	grid.resize(n);
	for(int i = 0;i < n;i++){
		cin >> grid[i];
	}
	
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(grid[i][j] == '.'){
				grid[i][j] = 't';
				dfs(k-1);
				grid[i][j] = '.';
			}
		}
	}
	cout << ans << endl;
}
