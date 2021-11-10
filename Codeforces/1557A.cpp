#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

void solve(){
	long long n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	long long ans = 0;
	for(int i = 0;i < n-1;i++){
		ans += arr[i];
	}
	cout << ((double)ans/(n-1)) + (double)arr[n-1] << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << fixed << setprecision(10);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
