#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
const int MAXN = 1e5 + 5;
 
vector<int> g[MAXN];
int a[MAXN];
 
vector<int> f[MAXN];
void dfs_f(int u,int fa){
	f[u] = {a[u]};
	for(int v: g[u]){
		if(v != fa){
			dfs_f(v,u);
		
			vector<int> nxt(f[u].size() + f[v].size());
			merge(f[u].begin(), f[u].end(), f[v].begin(), f[v].end(), nxt.begin(), greater<int>());
			if(nxt.size() > 20){
				nxt.resize(20);
			}
			swap(f[u], nxt);
		}
	}
}
 
int main(void)
{
	int n,Q;
	cin >> n >> Q;
	for(int i=1; i<=n; ++i) scanf("%d",&a[i]);
	for(int i=1; i<n; ++i)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		g[u].push_back(v); g[v].push_back(u);
	}
	
	dfs_f(1,0);
	
	while(Q--)
	{
		int u,k;
		scanf("%d%d",&u,&k);
		printf("%d\n",f[u][k-1]);
	}
	return 0;
}

