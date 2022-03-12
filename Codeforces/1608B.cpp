#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	if(a + b > n-2 || abs(a-b) > 1) {
		cout << -1 << endl;
		return;
	}
 
	vector<int> p(n);
	for (int i=0; i<n; i++) p[i] = i;
 
	if (a >= b) {
		for (int i=1; i<=b; i++) {
			swap(p[2*i-1], p[2*i]);
		}
		if (a > b) {
			swap(p[n-1], p[n-2]);
		}
	} else {
		for (int i=0; i<=min(a, b); i++) {
			swap(p[2*i], p[2*i+1]);
		}
	}
 
	for (int i=0; i<n; i++) cout << p[i] + 1 << ' ';
	cout << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int t; cin >> t;
	while (t--) solve();
}
