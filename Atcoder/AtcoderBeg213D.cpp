#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> paths;
bool vis[200010];

void dfs(int pos){
	cout << pos << " ";
	vis[pos] = true;
	for(int i = 0;i < paths[pos].size();i++){
		if(!vis[paths[pos][i]]){
			dfs(paths[pos][i]);
			cout << pos << " ";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a,b;
	for(int i = 0;i < n-1;i++){
		cin >> a >> b;
		paths[a].push_back(b);
		paths[b].push_back(a);
	}
	
	for(auto i: paths){
		sort(paths[i.first].begin(),paths[i.first].end());
	}
	
	dfs(1);
}
