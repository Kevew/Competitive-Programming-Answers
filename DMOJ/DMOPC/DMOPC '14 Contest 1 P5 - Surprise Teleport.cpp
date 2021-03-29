#include <bits/stdc++.h>
using namespace std;

int arr[1010][1010];
int ans = 9999999;
int shortest = 99999999;
int R,C;

void bfs(int y,int x){
	queue<pair<int,pair<int,int>>> que;
	que.push(make_pair(0,make_pair(y,x)));
	pair<int,pair<int,int>> temp;
	while(!que.empty()){
		temp = que.front();
		que.pop();
		int ty = temp.second.first,tx = temp.second.second;
		if(ty >= 0 && ty < R && tx >= 0 && tx < C){
			if(arr[ty][tx] > temp.first){
				arr[ty][tx] = temp.first;
				que.push({temp.first+1,{ty+1,tx}});
				que.push({temp.first+1,{ty-1,tx}});
				que.push({temp.first+1,{ty,tx-1}});
				que.push({temp.first+1,{ty,tx+1}});
			}else if(arr[ty][tx] == -2){
				shortest = min(temp.first,shortest);
			}
		}
	}
}

int main(){
	int starty,startx;
	int endy,endx;
	cin >> R >> C;
	cin >> starty >> startx >> endy >> endx;
	char a;
	for(int i = 0;i < R;i++){
		for(int j = 0;j < C;j++){
			cin >> a;
			if(a == 'O'){
				arr[i][j] = 999999;
			}else{
				arr[i][j] = -1;
			}
		}
	}
	int T;
	cin >> T;
	int y,x;
	bfs(starty,startx);
	int test = arr[endy][endx];
	for(int i = 0;i < R;i++){
		for(int j = 0;j < C;j++){
			if(arr[i][j] > -1){
				arr[i][j] = 999999;
			}
		}
	}
	for(int i = 0;i < T;i++){
		cin >> y >> x;
		arr[y][x] = -2;
	}
	bfs(starty,startx);
	cout << max(0,test-shortest) << endl;
}
