#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

void solve(){
	long long n;
	cin >> n;
	long long average = 0;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		average += arr[i];
	}
	average /= n;
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		ans += arr[i]-average;
	}
	cout << ans*(n-ans) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
