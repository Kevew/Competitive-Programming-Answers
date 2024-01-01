#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> arr(n);
	map<int,int> cnt;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(i < k){
			cnt[arr[i]]++;
		}
	}
	
	sort(arr.begin(),arr.end());
	
	int ans = 0;
	for(int i = 0;i < k;i++){
		if(cnt[arr[i]] > 0){
			cnt[arr[i]]--;
		}else{
			ans++;
		}
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
