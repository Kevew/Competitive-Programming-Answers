#include <bits/stdc++.h>
using namespace std;

int a[300010];
vector<int> v[300010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		v[a[i]].push_back(i+1);
	}
	
	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	
	int l,r;
	while(q--){
		cin >> l >> r;
		int ans = 1;
		for(int i = 0;i <= 40;i++){
			int c = a[uniform_int_distribution<int>(l,r)(rng)];
			int f = upper_bound(v[c].begin(),v[c].end(),r)-lower_bound(v[c].begin(),v[c].end(),l);
			ans = max(ans,2*f-(r-l+1));
		}
		cout << ans << endl;
	}
}
