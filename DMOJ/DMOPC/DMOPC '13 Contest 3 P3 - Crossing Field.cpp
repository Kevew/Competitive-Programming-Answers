#include <bits/stdc++.h>
using namespace std;

int arr[1510][1510];
bool beento[1510][1510];

int N,H;

void dfs(int y,int x){
	if(y >= 0 && y < N && x >= 0 && x < N){
		if(!beento[y][x]){
			beento[y][x] = true;
			if(abs(arr[y][x]-arr[y+1][x]) <= H){
				dfs(y+1,x);
			}
			if(abs(arr[y][x]-arr[y-1][x]) <= H){
				dfs(y-1,x);
			}
			if(abs(arr[y][x]-arr[y][x+1]) <= H){
				dfs(y,x+1);
			}
			if(abs(arr[y][x]-arr[y][x-1]) <= H){
				dfs(y,x-1);
			}
		}
	}
}

int main(){
	cin >> N >> H;
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cin >> arr[i][j];
		}
	}
	dfs(0,0);
	if(beento[N-1][N-1]){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
}
