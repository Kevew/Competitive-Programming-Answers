#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	ll x,y;
	cin >> x >> y;
	ll ans = 0;
	for(ll i = 1; i*i < x; i++){
		ans += max(min(y,x/i-1)-i,0LL);
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

