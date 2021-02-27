#include <bits/stdc++.h>
using namespace std;

int n,m;
int floorcnt[1000];
char arr[50][50];

void dfs(int y,int x,int room){
	if(y >= 0 && y < n && x >= 0 && x < m){
		if(arr[y][x] == '.'){
			floorcnt[room]++;
			arr[y][x] = 'I';
			dfs(y+1,x,room);
			dfs(y-1,x,room);
			dfs(y,x+1,room);
			dfs(y,x-1,room);
		}
	}
}

int main(){
	int cnt;
	cin >> cnt;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
		}
	}
	int totalrooms = 0;
	int i = 0;
	for(i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(arr[i][j] == '.'){
				dfs(i,j,totalrooms);
				totalrooms++;
			}
		}
	}
	sort(floorcnt,floorcnt+totalrooms,greater<int>());
	i = 0;
	while(cnt >= floorcnt[i] && i < totalrooms){
		cnt -= floorcnt[i];
		i++;
	}
	if(i == 1){
		cout << i << " room, " << cnt << " square metre(s) left over" << endl;
	}else{
		cout << i << " rooms, " << cnt << " square metre(s) left over" << endl;
	}
}
