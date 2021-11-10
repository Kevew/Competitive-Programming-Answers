#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	ll k;
	cin >> s >> k;
	unordered_map<ll, ll> dp;
	ll eq = 1;
	for(ll i = 0;i < s.size();i++){
		unordered_map<ll, ll> newdp;
		for(auto x: dp){
			for(ll j = 0;j < 10;j++){
				newdp[min(k+1,x.first*j)] += x.second;
			}
		}
		
		for(ll j = 0;j < s[i]-'0';j++){
			if(i == 0 && j == 0){
				continue;
			}
			newdp[min(k+1,eq*j)]++;
		}
		
		if(i){
			for(ll j = 1;j < 10;j++){
				newdp[min(k+1,j)]++;
			}
		}
		eq *= s[i]-'0';
		
		swap(dp,newdp);
	}
	ll ans = 0;
	if(eq <= k){
		ans++;
	}
	for(auto i: dp){
		if(i.first <= k){
			ans += i.second;
		}
	}
	cout << ans << endl;
}

