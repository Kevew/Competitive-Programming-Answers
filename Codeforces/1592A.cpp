#include <bits/stdc++.h>
using namespace std;

long long dmg[1010];

void solve(){
	long long n,H;
	cin >> n >> H;
	for(long long i = 0;i < n;i++){
		cin >> dmg[i];
	}
	sort(dmg,dmg+n);
	long long a = dmg[n-1];
	long long b = dmg[n-2];
	long long ans = (H/(a+b))*2;
	long long temp = H%(a+b);
	if(temp > 0){
		if(temp <= a){
			ans += 1;
		}else{
			ans += 2;
		}
	}
	cout << ans << endl;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
