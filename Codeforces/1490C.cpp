#include <bits/stdc++.h>
using namespace std;

using ll = long long;

unordered_set<ll> arr;
ll limit = 1000000000000L;

void setup(){
	for(ll i = 1;i*i*i <= limit;i++){
		arr.insert(i*i*i);
	}
}

void solve(){
	ll ans;
	cin >> ans;
	for(ll i = 1;i*i*i <= ans;i++){
		if(arr.count(ans-i*i*i)){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	return;
}

int main(){
	setup();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
