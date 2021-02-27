#include <bits/stdc++.h>
using namespace std;

int n,m;
char arr[110][110];
int visited[110][110];

void dfs(int y,int x,int cnt){
	if(y >= 0 && y < n && x >= 0 && x < m){
		if(visited[y][x] > cnt && arr[y][x] == '.' || arr[y][x] == 'S'){
			visited[y][x] = cnt;
			dfs(y+1,x,cnt+1);
			dfs(y-1,x,cnt+1);
			dfs(y,x+1,cnt+1);
			dfs(y,x-1,cnt+1);
		}else if(visited[y][x] > cnt && arr[y][x] != 'W' && arr[y][x] != 'B'){
			visited[y][x] = cnt;
			if(arr[y][x] == 'L'){
				dfs(y,x-1,cnt);
			}else if(arr[y][x] == 'R'){
				dfs(y,x+1,cnt);
			}else if(arr[y][x] == 'U'){
				dfs(y-1,x,cnt);
			}else if(arr[y][x] == 'D'){
				dfs(y+1,x,cnt);
			}
		}
	}
}

void setW(int y,int x){
	int tempy = y-1,tempx = x;
	while(tempy >= 0){
		if(arr[tempy][tempx] == 'W'){
			break;
		}
		if(arr[tempy][tempx] == '.' || arr[tempy][tempx] == 'S'){
			arr[tempy][tempx] = 'B';
		}
		tempy--;
	}
	tempy = y+1,tempx = x;
	while(tempy < n){
		if(arr[tempy][tempx] == 'W'){
			break;
		}
		if(arr[tempy][tempx] == '.' || arr[tempy][tempx] == 'S'){
			arr[tempy][tempx] = 'B';
		}
		tempy++;
	}
	tempy = y,tempx = x-1;
	while(tempx >= 0){
		if(arr[tempy][tempx] == 'W'){
			break;
		}
		if(arr[tempy][tempx] == '.' || arr[tempy][tempx] == 'S'){
			arr[tempy][tempx] = 'B';
		}
		tempx--;
	}
	tempy = y,tempx = x+1;
	while(tempx < m){
		if(arr[tempy][tempx] == 'W'){
			break;
		}
		if(arr[tempy][tempx] == '.' || arr[tempy][tempx] == 'S'){
			arr[tempy][tempx] = 'B';
		}
		tempx++;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int startx,starty;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
			if(arr[i][j] == 'W'){
				visited[i][j] = -1;
			}else if(arr[i][j] == '.'){
				visited[i][j] = 9999999;
			}else if(arr[i][j] == 'C'){
				visited[i][j] = -1;
			}else if(arr[i][j] == 'S'){
				visited[i][j] = 9999999;
				starty = i;
				startx = j;
			}else if(arr[i][j] == 'L'){
				visited[i][j] = 9999999;
			}else if(arr[i][j] == 'R'){
				visited[i][j] = 9999999;
			}else if(arr[i][j] == 'U'){
				visited[i][j] = 9999999;
			}else if(arr[i][j] == 'D'){
				visited[i][j] = 9999999;
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(arr[i][j] == 'C'){
				setW(i,j);
			}
		}
	}
	
	dfs(starty,startx,0);
	arr[starty][startx] = 'S';
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(arr[i][j] == '.' || arr[i][j] == 'B'){
				if(visited[i][j] == 9999999){
					cout << "-1" << endl;
				}else{
					cout << visited[i][j] << endl;
				}
			}
		}
	}
}

