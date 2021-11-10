#include <bits/stdc++.h>
using namespace std;

vector<int> paths[21];
bool vis[21];
vector<int> order;

void dfs(int i){
	if(vis[i]){
		return;
	}
	vis[i] = true;
	order.push_back(i);
	for(auto j: paths[i]){
		dfs(j);
	}
}

int dfs2(int pos,vector<int> color){
	if(pos >= order.size()){
		return 1;
	}
	int ans = 0;
	for(int i = 0;i < 3;i++){
		bool valid = true;
		for(auto j: paths[order[pos]]){
			if(color[j] == i){
				valid = false;
				break;
			}
		}
		if(valid){
			color[order[pos]] = i;
			ans += dfs2(pos+1,color);
			color[order[pos]] = -1;
		}
	}
	return ans;
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		paths[a].push_back(b);
		paths[b].push_back(a);
	}
	long long ans = 1;
	for(int i = 1;i <= n;i++){
		if(!vis[i]){
			order.clear();
			dfs(i);
			vector<int> color(n+1,-1);
			color[i] = 0;
			ans *= 3*dfs2(1,color);
		}
	}
	cout << ans << endl;
}
