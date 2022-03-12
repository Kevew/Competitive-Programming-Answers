#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;

bool ans = false;

void dfs(int x,int y,int time){
	if(time == 2){
		if(x == c && y == d){
			ans = true;
		}
		return;
	}
	dfs(x+1,y+2,time+1);
	dfs(x+1,y-2,time+1);
	dfs(x-1,y+2,time+1);
	dfs(x-1,y-2,time+1);
	dfs(x+2,y+1,time+1);
	dfs(x+2,y-1,time+1);
	dfs(x-2,y+1,time+1);
	dfs(x-2,y-1,time+1);
}

int main(){
	cin >> a >> b >> c >> d;
	dfs(a,b,0);
	if(ans){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
