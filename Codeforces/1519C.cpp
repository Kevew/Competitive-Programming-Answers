#include <bits/stdc++.h>
using namespace std;

int u[200010],s[200010];
long long ans[200010];

void solve(){
	memset(ans,0,sizeof(ans));
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> u[i];
		u[i]--;
	}
	vector<vector<long long>> arr(n);
	for(int i = 0;i < n;i++){
		cin >> s[i];
		arr[u[i]].push_back(s[i]);
	}
	for(int i = 0;i < n;i++){
		sort(arr[i].begin(),arr[i].end(),greater<int>());
	}
	vector<vector<long long>> pr(n,vector<long long>(1,0));
	for(int i = 0;i < n;i++){
		for(long long x : arr[i]){
			pr[i].push_back(pr[i].back() + x);
		}
	}
	
	for(int i = 0;i < n;i++){
		for(long long j = 1;j <= arr[i].size();j++){
			ans[j] += pr[i][arr[i].size()/j*j];
		}
	}
	
	for(int i = 1;i <= n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
