#include <bits/stdc++.h>
using namespace std;

long long arr[2][100010];
long long pref[2][100010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[0][i];
	}
	for(long long i = 0;i < n;i++){
		cin >> arr[1][i];
	}
	pref[1][0] = 0;
	pref[0][0] = 0;
	for(long long i = 1;i <= n;i++){
		pref[0][i] = pref[0][i-1]+arr[0][i-1];
		pref[1][i] = pref[1][i-1]+arr[1][i-1];
	}
	pref[1][0] = 0;
	pref[0][n+1] = pref[0][n];
	long long ans = 1e18;
	for(long long i = 1;i <= n;i++){
		ans = min(ans,max(pref[1][i-1],pref[0][n+1]-pref[0][i]));
	}
//	if(ans == 1e18){
//		ans = 0;
//	}
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

