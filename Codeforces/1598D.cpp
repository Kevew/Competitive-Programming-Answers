#include <bits/stdc++.h>
using namespace std;

long long arr1[200010],arr2[200010];

void solve(){
	long long n;
	cin >> n;
	vector<long long> f(n+1),s(n+1);
	for(int i = 0;i < n;i++){
		cin >> arr1[i] >> arr2[i];
		f[arr1[i]]++;
		s[arr2[i]]++;
	}
	long long ans = (n*(n-1)*(n-2))/6;
	for(int i = 0;i < n;i++){
		ans -= (f[arr1[i]]-1LL)*1LL*(s[arr2[i]]-1LL);
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
