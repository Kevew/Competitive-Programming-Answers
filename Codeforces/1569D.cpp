#include <bits/stdc++.h>
using namespace std;

map<int,bool> streetv;
map<int,bool> streetd;
map<int,int> streetcurrv;
map<int,int> streetcurrd;

void solve(){
	streetv.clear();
	streetd.clear();
	streetcurrv.clear();
	streetcurrd.clear();
	map<int,map<int,int>> removev;
	map<int,map<int,int>> removed;
	int n,m,k;
	cin >> n >> m >> k;
	int temp;
	int sv[n],sd[m];
	for(int i = 0;i < n;i++){
		cin >> temp;
		streetv[temp] = true;
		sv[i] = temp;
		streetcurrd[temp] = 0;
		streetcurrv[temp] = 0;
	}
	for(int i = 0;i < m;i++){
		cin >> temp;
		streetd[temp] = true;
		sd[i] = temp;
		streetcurrv[temp] = 0;
		streetcurrd[temp] = 0;
	}
	
	int a,b;
	long long ans = 0;
	for(int i = 0;i < k;i++){
		cin >> a >> b;
		if(streetv[a] && streetd[b]){
			continue;
		}
		if(streetv[a]){
			int curr = *lower_bound(sd,sd+m,b);
			ans += streetcurrv[curr];
			streetcurrv[curr]++;
			ans -= removev[a][curr];
			removev[a][curr]++;
		}else{
			int curr = *lower_bound(sv,sv+n,a);
			ans += streetcurrd[curr];
			streetcurrd[curr]++;
			ans -= removed[b][curr];
			removed[b][curr]++;
		}
	}
	cout << ans << endl;
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
