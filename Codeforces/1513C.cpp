#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

long long arr[200010];

void setup(){
	for(long long i = 0;i < 9;i++){
		arr[i] = 2;
	}
	arr[9] = 3;
	for(long long i = 10;i < 200010;i++){
		arr[i] = (arr[i-9]+arr[i-10])%MOD;
	}
}

void solve(){
	long long n,m;
	cin >> n >> m;
	long long temp;
	long long ans = 0;
	while(n > 0){
		temp = n%10;
		ans += ((m+temp<10)?1:arr[m+temp-10]);
        ans %= MOD;
        n/=10;
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	setup();
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
