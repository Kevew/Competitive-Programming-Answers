#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<char> commands;
char arr[400][100];
int dir[4][2] = {{-1,0},
				 {0,1},
				 {1,0},
				 {0,-1}};

void dfs(int y,int x,int direc,int whichcommand){
	if(whichcommand < commands.size()){
		if(commands[whichcommand] == 'F'){
			whichcommand++;
			y += dir[direc][0];
			x += dir[direc][1];
			if(y >= 0 && y < n && x >= 0 && x < m && arr[y][x] != 'X'){
				dfs(y,x,direc,whichcommand);
			}
		}else if(commands[whichcommand] == 'R'){
			whichcommand++;
			direc++;
			if(direc == 4){
				direc = 0;
			}
			dfs(y,x,direc,whichcommand);
		}else{
			whichcommand++;
			direc--;
			if(direc == -1){
				direc = 3;
			}
			dfs(y,x,direc,whichcommand);
		}
	}else if(whichcommand == commands.size()){
		arr[y][x] = '*';
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
		}
	}
	
	int Q;
	cin >> Q;
	char temp;
	for(int i = 0;i < Q;i++){
		cin >> temp;
		commands.push_back(temp);
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(arr[i][j] == '.' || arr[i][j] == '*'){
				dfs(i,j,0,0);
				dfs(i,j,1,0);
				dfs(i,j,2,0);
				dfs(i,j,3,0);
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}
