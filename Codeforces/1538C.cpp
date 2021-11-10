#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,l,r;
	cin >> n >> l >> r;
	vector<long long> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	long long ans = 0;
	for(int i = 0;i < n;i++){
		ans += upper_bound(arr.begin(),arr.end(),r-arr[i])-arr.begin();
		ans -= lower_bound(arr.begin(),arr.end(),l-arr[i])-arr.begin();
		if(l <= 2 * arr[i] && 2 * arr[i] <= r){
            ans--;
        }
	}
	cout << ans/2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
