#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pi;
#define mp make_pair
#define pb push_back
vector<ll> g[200001];
 
int main()
{
//freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int T; T=1; cin >> T;
    while(T--)
    {
		ll n, k; cin >> n >> k;
		for(int i=1;i<=n;i++){
			g[i].clear();
		}
		ll a[n+1]; 
		for(int i=1;i<=n;i++) { 
			cin >> a[i]; 
			g[a[i]].pb(i);
		}
		ll c[n+1];
		memset(c, 0, sizeof(c));
		ll x=1;
		vector<ll> q;
		for(int i=1;i<=n;i++){
			for(int j=0;j<min((ll)g[i].size(), k);j++){
				if(g[i].size()>=k){
					c[g[i][j]]=j+1;
				}else{
					q.pb(g[i][j]);
				}
			}
		}
		for(int i=0;i<(q.size()/k)*k;i++){
			c[q[i]]= i%k+1;
		}
		for(int i=1;i<=n;i++) cout << c[i] << " ";
		cout << "\n";
    }
}
 
