#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

void solve(){
	long long n;
	cin >> n;
	string a;
	cin >> a;
	long long ans = 0;
	long long test = 0;
	for(long long i = 0;i < n;i++){
		if(!i||a[i] != a[i-1]){
			test++;
			arr[test] = 0;
		}
		arr[test]++;
	}
	if(test == 1){
		arr[1] += 2;
	}else if(test%2){
		arr[1] += arr[test];
		test--;
	}
	for(long long i = 1;i <= test;i++){
		ans += arr[i]/3;
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

