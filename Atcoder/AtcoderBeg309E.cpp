#include <bits/stdc++.h>
using namespace std;

vector<int> edges[300010];
map<int,int> level;

void dfs(int pos,int cnt){
	level[pos] = cnt;
	for(auto i: edges[pos]){
		dfs(i,cnt+1);
	}
}

bool vis[300010];

void check(int pos,int cnt){
	if(cnt == -1){
		return;
	}
	if(!vis[pos]){
		vis[pos] = true;
		for(auto i: edges[pos]){
			check(i, cnt-1);
		}
	}
}
int main(){
	int n,m;
	cin >> n >> m;
	int arr[n-1];
	for(int i = 0;i < n-1;i++){
		cin >> arr[i];
		edges[arr[i]].push_back(i+2);
	}
	
	dfs(1,0);
	
	vector<pair<int,pair<int,int>>> insurance;
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		insurance.push_back(make_pair(b+level[a], make_pair(a,b)));
	}
	
	sort(insurance.begin(),insurance.end(), greater<pair<int,pair<int,int>>>() );
	
	for(int i = 0;i < m;i++){
		check(insurance[i].second.first, insurance[i].second.second);
	}
	int ans = 0;
	for(int i = 0;i <= n;i++){
		if(vis[i]){
			ans += 1;
		}
	}
	cout << ans << endl;
}
