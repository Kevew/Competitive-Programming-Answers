#include <bits/stdc++.h>
using namespace std;

vector<int> edges[200010];
bool vis[200010];

int N,E;

const int MOD = 998244353;

void dfs(int pos){
	vis[pos] = true;
	N++;
	E += edges[pos].size();
	for(auto i: edges[pos]){
		if(!vis[i]){
			dfs(i);
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	int a,b;
	for(int i = 0;i < m;i++){
		cin >> a >> b;
		a--,b--;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	long long ans = 1;
	for(int i = 0;i < n;i++){
		if(!vis[i]){
			N = 0;
			E = 0;
			dfs(i);
			if((N*2) == E){
				ans = (ans*2)%MOD;
			}else{
				ans = 0;
				break;
			}
		}
	}
	cout << ans << endl;
}
