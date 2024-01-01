#include <bits/stdc++.h>
using namespace std;

struct Edge{
	long long to,idx,cost;
};

long long idx[200010];

long long n,m;

void solve(vector<vector<Edge>> paths){
	priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> que;
	que.push(make_pair(0,0));
	vector<long long> dist(n,1e18);
	dist[0] = 0;
	while(!que.empty()){
		pair<long long,int> curr = que.top();
		que.pop();
		if(dist[curr.second] != curr.first){
			continue;
		}
		for(auto e: paths[curr.second]){
			if(curr.first + e.cost < dist[e.to]){
				dist[e.to] = curr.first + e.cost;
				idx[e.to] = e.idx;
				que.push(make_pair(dist[e.to],e.to));
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	vector<vector<Edge>> paths(n);
	for(long long i = 0;i < m;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		a--;
		b--;
		paths[a].push_back({b,i,c});
		paths[b].push_back({a,i,c});
	}
	solve(paths);
	for(int i = 1;i < n;i++){
		cout << idx[i]+1 << " ";
	}
}
