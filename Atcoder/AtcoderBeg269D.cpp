#include <bits/stdc++.h>
using namespace std;

bool vis[2010];
map<pair<int,int>,pair<int,bool>> exist;

int dir[6][2] = {{-1,-1},{-1,0},{0,-1},{0,1},{1,0},{1,1}};

void dfs(int x,int y){
	if(exist[{x,y}].second){
		exist[{x,y}].second = false;
		vis[exist[{x,y}].first] = true;
	}else{
		return;
	}
	for(int i = 0;i < 6;i++){
		dfs(x + dir[i][0], y + dir[i][1]);
	}
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> check;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		exist[{a,b}] = {i,true};
		check.push_back({a,b});
	}
	
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(!vis[i]){
			dfs(check[i].first,check[i].second);
			ans++;
		}
	}
	cout << ans << endl;
}
