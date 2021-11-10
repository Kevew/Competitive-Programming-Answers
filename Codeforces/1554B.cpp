#include <bits/stdc++.h>
using namespace std;

int solve(){
	int n,k;
	cin >> n >> k;
	vector<int> arr(n+1);
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
	}
	long long ans = -1e12;
	int start = max(1,n-2*k);
	for(int i = start;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			ans = max(ans,1LL*i*j - 1LL*k*(arr[i]|arr[j]));
		}
	}
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
