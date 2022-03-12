#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(int& x : a) cin >> x;
	for(int& x : b) cin >> x;
	using B = bitset<11111>;
	B sum;
	sum[0] = 1;
	for(int i = 0; i < n; i++){
		sum = (sum << a[i]) | (sum << b[i]);
	}
	int tsq = 0;
	int totalsum = 0;
	for(int i = 0; i < n; i++){
		tsq += a[i] * a[i];
		tsq += b[i] * b[i];
		totalsum += a[i];
		totalsum += b[i];
	}
	int ans = 1e9;
	for(int i = 0; i < sum.size(); i++){
		if(sum[i]){
			ans = min(ans, i * i + (totalsum - i) * (totalsum - i));
		}
	}
	int answer = ans + (n-2) * tsq;
	cout << answer << endl;
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

