#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

long long c[200010][110];
long long arr[200010];

long long C(long long n,long long m){
	if(c[n][m]) return c[n][m];
	if(m==0||n==m) return 1;
	return c[n][m]=(C(n-1,m)+C(n-1,m-1))%mod;
}

void solve(){
	long long n,m,k;
	cin >> n >> m >> k;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	long long l = 0,r = 0;
	long long ans = 0;
	while(r < n){
		if(arr[r]-arr[l]<=k){
			if(r-l+1>=m){
				ans=(ans+C(r-l,m-1))%mod;
			}
			r++;
		}else{
			l++;
		}
	}
	cout << ans << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
