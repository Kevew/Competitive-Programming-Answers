#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m;
	cin >> n >> m;
	long long curr = m-n;
	long long ans = 0;
  	while (n != 0 || m != 0) {
  	  	ans += m - n;
    	n /= 10;
		m /= 10;
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
