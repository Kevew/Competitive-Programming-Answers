#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll a[200010];

ll gcd(ll a, ll b) {
   if(b == 0) return a;
   return gcd(b, a % b);
}

int main(){
	ll n,m;
	cin >> n >> m;
	ll ans = 0;
	for(ll i = 0;i < n;i++){
		cin >> a[i];
	}
	for(ll i = 1;i < n;i++){
		ans = gcd(ans,abs(a[i]-a[0]));
	}
	ll temp;
	for(ll i = 0;i < m;i++){
		cin >> temp;
		cout << gcd(a[0]+temp,ans) << " ";
	}
}
