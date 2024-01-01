#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m;
	cin >> n >> m;
	long long ans = 0;
	for(int i = 0;i < n;i++){
		long long a;
		cin >> a;
		ans = max(ans,a|m);
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
