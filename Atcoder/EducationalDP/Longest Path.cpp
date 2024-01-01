#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100010];
int vis[100010];

int dfs(int pos){
	if(vis[pos]){
		return vis[pos];
	}
	if(edges[pos].size() == 0){
		return vis[pos] = 1;
	}
	int curr = 0;
	for(auto i: edges[pos]){
		curr = max(curr, dfs(i));
	}
	return vis[pos] = curr + 1;
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		edges[a].push_back(b);
	}
	for(int i = 1;i <= n;i++){
		if(!vis[i]){
			dfs(i);
		}
	}
	int ans = 0;
	for(int i = 1;i <= n;i++){
		ans = max(ans,vis[i]);
	}
	cout << ans-1 << endl;
}
