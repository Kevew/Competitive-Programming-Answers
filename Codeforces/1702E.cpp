#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> edges;
vector<bool> used;

int dfs(int curr){
	used[curr] = true;
	for(auto i: edges[curr]){
		if(!used[i]){
			return dfs(i)+1;
		}
	}
	
	return 1;
}
 
void solve(){
	int n;
	cin >> n;
	
	edges.clear();
	used.clear();
	used.resize(n+1,false);
	
	bool endnow = false;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].push_back(b);
		edges[b].push_back(a);
		if(a == b || edges[a].size() > 2 || edges[b].size() > 2){
			endnow = true;
		}
	}
	
	if(endnow){
		cout << "NO" << endl;
		return;
	}
	
	
	for(int i = 0;i < n;i++){
		if(!used[i]){
			if(dfs(i)%2){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

