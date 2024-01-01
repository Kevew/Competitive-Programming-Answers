#include <bits/stdc++.h>
using namespace std;

int fastest[300010];
vector<int> edges[300010];

void dfs(int pos){
	queue<int> que;
	que.push(pos);
	fastest[pos] = 0;
	while(!que.empty()){
		int temp = que.front();
		que.pop();
		for(auto i: edges[temp]){
			if(fastest[i] == -1){
				que.push(i);
				fastest[i] = fastest[temp] + 1;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(fastest,-1,sizeof(fastest));
	int n,m,x;
	cin >> n >> m >> x;
	for(int i = 0;i < x;i++){
		int a,b;
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	
	dfs(1);
	int f = 0;
	for(int i = 1;i <= n;i++){
		f = max(f,fastest[i]);
	}
	dfs(n+m);
	int s = 0;
	for(int i = n+1;i <= n+m;i++){
		s = max(s,fastest[i]);
	}
	cout << s + f + 1 << endl;
}
