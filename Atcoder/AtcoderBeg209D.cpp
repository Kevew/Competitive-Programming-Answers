#include <bits/stdc++.h>
using namespace std;

vector<int> paths[100010];
int dist[100010];
int leaf;

void dfs(int pos,int time,int prev){
	dist[pos] = time%2;
	for(auto i:paths[pos]){
		if(i != prev){
			dfs(i,time+1,pos);
		}
	}
}

int main(){
	int n,q;
	cin >> n >> q;
	int a,b;
	for(int i = 0;i < n-1;i++){
		cin >> a >> b;
		paths[a].push_back(b);
		paths[b].push_back(a);
		if(paths[a].size() == 1){
			leaf = a;
		}
		if(paths[b].size() == 1){
			leaf = b;
		}
	}
	dfs(leaf,0,leaf);
	
	
	for(int i = 0;i < q;i++){
		cin >> a >> b;
		if(dist[a] == dist[b]){
			cout << "Town" << endl;
		}else{
			cout << "Road" << endl;
		}
	}
}
