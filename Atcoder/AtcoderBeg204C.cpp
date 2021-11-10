#include<bits/stdc++.h>
using namespace std;

using ll = long long;
 
vector<ll> v[2005];
bool vis[2005];
 
void dfs(ll now){
	if(vis[now]) return;
	vis[now] = 1;
	for(auto it : v[now]) 
	{
		if(!vis[it]) dfs(it);
	}
}
 
int main(){
    ll n,m,i,k,t;
	ll ans = 0,tp,tp2;
	cin >> n >> m;
	for(i=0;i<m;i++)
	{
		cin >> tp >> tp2;
		v[tp].push_back(tp2);
	}
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n;k++) vis[k] = 0;
		dfs(i);
		for(k=1;k<=n;k++) if(vis[k]) ans++;
	}
	cout << ans << endl;
	
    return 0;
}
