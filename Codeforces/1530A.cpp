#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long ans = 0;
	long long n;
	cin >> n;
	while(n > 0){
		ans = max(ans,(n%10));
		n /= 10;
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
