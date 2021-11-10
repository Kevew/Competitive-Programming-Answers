#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main(){
	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i = 1;i*i <= n;i++){
		ans += (((n/i)-i)/2 + 1) % MOD;
		ans %= MOD;
	}
	cout << ans << endl;
}
