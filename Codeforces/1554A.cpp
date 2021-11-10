#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long ans = 0;
	
	for(int i = 1;i < n;i++){
		ans = max(ans,arr[i]*arr[i-1]);
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
