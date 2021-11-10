#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin >> n;
	vector<set<int>> arr(n);
	int a,b;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		a--;
		b--;
		arr[a].insert(b);
		arr[b].insert(a);
	}
	vector<int> val(n, 1);
	queue<int> leafs;
	for (int i = 0; i < n; ++i) {
	if (arr[i].size() == 1){
			leafs.push(i);
		}
	}
	while (!leafs.empty()) {
		int v = leafs.front();
		leafs.pop();
		int to = *arr[v].begin();
		val[to] += val[v];
		val[v] = 0;
		arr[v].clear();
		arr[to].erase(v);
		if (arr[to].size() == 1) {
			leafs.push(to);
		}
	}
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += val[i] * 1ll * (val[i] - 1) / 2;
		ans += val[i] * 1ll * (n - val[i]);
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
