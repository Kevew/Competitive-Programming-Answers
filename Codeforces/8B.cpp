#include <bits/stdc++.h>
using namespace std;

bool visited[210][210];

int main(){
	string a;
	cin >> a;
	int n = a.size();
	int x = 100,y = 100;
	visited[x][y] = true;
	for(int i = 0;i < n;i++){
		if(a[i] == 'L') x--;
		if(a[i] == 'R') x++;
		if(a[i] == 'U') y++;
		if(a[i] == 'D') y--;
		if(visited[x][y] || visited[x+1][y]+visited[x-1][y]+visited[x][y-1]+visited[x][y+1] > 1){
			cout << "BUG" << endl;
			return 0;
		}
		visited[x][y] = true;
	}
	cout << "OK" << endl;
}
