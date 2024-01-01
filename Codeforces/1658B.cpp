#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve(){
	int n;
	cin >> n;
	if(n%2 == 1){
		cout << "0" << endl;
	}else{
		long long ans = 1;
		long long times = n/2;
		for(long long i = 1;i <= times;i++){
			ans = (ans*(i*i))%MOD;
		}
		cout << ans << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
