#include <bits/stdc++.h>
using namespace std;

long long fastest[200010];
long long heights[200010];

map<int,vector<int>> edges;
long long maximum;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	maximum = -1e18;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> heights[i];
		fastest[i] = -1e18;
	}
	int a,b;
	for(int j = 0;j < m;j++){
		cin >> a >> b;
		a--;
		b--;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	
	queue<pair<long long,long long>> que;
	que.push({0,0});
	while(!que.empty()){
		pair<long long,long long> temp = que.front();
		que.pop();
		int pos = temp.first;
		long long hap = temp.second;
		if(fastest[pos] < hap){
			fastest[pos] = hap;
			maximum = max(maximum,hap);
			for(int i = 0;i < edges[pos].size();i++){
				if(heights[edges[pos][i]] > heights[pos]){
					que.push({edges[pos][i],hap-2*(heights[edges[pos][i]]-heights[pos])});
				}else if(heights[edges[pos][i]] < heights[pos]){
					que.push({edges[pos][i],hap+(heights[pos]-heights[edges[pos][i]])});
				}else{
					que.push({edges[pos][i],hap});
				}
			}
		}
	}
	
	
	cout << maximum << endl;
}
