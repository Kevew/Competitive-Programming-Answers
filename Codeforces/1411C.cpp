#include <bits/stdc++.h>
using namespace std;

long long arr[100010];
long long check(long long x){
	return x == arr[x]?x:arr[x] = check(arr[x]);
}

void solve(){
	long long n,m;
	cin >> n >> m;
	for(long long i = 1;i <= n;i++){
		arr[i] = i;
	}
	long long ans = m;
	long long a,b;
	for(long long i = 0;i < m;i++){
		cin >> a >> b;
		if(a == b){
			ans--;
		}else if(check(a) == check(b)){
			ans++;
		}else{
			arr[check(a)] = check(b);
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
