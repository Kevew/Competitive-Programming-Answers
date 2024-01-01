#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	int ans = 0;
	vector<int> val;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(i > 0){
			ans += abs(arr[i]-arr[i-1]);
			val.push_back(abs(arr[i]-arr[i-1]));
		}
	}
	sort(val.begin(),val.end());
	for(int i = 0;i < k-1;i++){
		ans -= val[n-2-i];
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
