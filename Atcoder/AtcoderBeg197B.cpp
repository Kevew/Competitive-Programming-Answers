#include <bits/stdc++.h>
using namespace std;

char grid[110][110];
long long ans = 0;

int main(){
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	x--;
	y--;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> grid[i][j];
		}
	}
	for(int i = y+1;i < m;i++){
		if(grid[x][i] == '.'){
			ans++;
		}else{
			break;
		}
	}
	for(int i = y-1;i >= 0;i--){
		if(grid[x][i] == '.'){
			ans++;
		}else{
			break;
		}
	}
	for(int j = x-1;j >= 0;j--){
		if(grid[j][y] == '.'){
			ans++;
		}else{
			break;
		}
	}
	for(int j = x+1;j < n;j++){
		if(grid[j][y] == '.'){
			ans++;
		}else{
			break;
		}
	}
	if(grid[x][y] == '.'){
		cout << ans+1 << endl;
	}else{
		cout << '0' << endl;
	}
}
