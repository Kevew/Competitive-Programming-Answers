#include <bits/stdc++.h>
using namespace std;

vector<pair<long long,long long>> edges[200010];
bool vis[200010];
map<long long,long long> campvis;
bool ans = false;

void dfs(long long pos, long long camp){
	if(ans){
		return;
	}
	if(campvis.find(pos) == campvis.end()){
		vis[pos] = true;
		campvis[pos] = camp;
		for(auto i: edges[pos]){
			dfs(i.first, camp + i.second);
		}
	}else{
		if(campvis[pos] != camp){
			ans = true;
		}
	}
}

void solve(){
	ans = false;
	long long n,m;
	cin >> n >> m;
	for(long long i = 1;i <= n;i++){
		vis[i] = false;
		edges[i].clear();
	}
	for(long long i = 0;i < m;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		edges[a].push_back({b,c});
		edges[b].push_back({a,-c});
	}
	for(long long i = 1;i <= n;i++){
		if(ans){
			break;
		}
		if(!vis[i]){
			dfs(i, 0);
			campvis.clear();
		}
	}
	if(ans){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
