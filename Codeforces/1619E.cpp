#include <bits/stdc++.h>
using namespace std;

long long arr[200010];
map<long long,long long> check;

void solve(){
	check.clear();
	long long n;
	cin >> n;
	vector<long long> dp(n+5,-1);
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		check[arr[i]]++;
	}
	sort(arr,arr+n);
	stack<long long> have;
	dp[0] = 0;
	for(long long i = 0;i < n+1;i++){
		if(dp[i] != -1){
			cout << dp[i]+check[i] << " ";
			if(check[i] >= 1){
				dp[i+1] = dp[i];
				for(long long j = 1;j < check[i];j++){
					have.push(i);
				}
			}else{
				if(have.size() > 0){
					long long a = have.top();
					have.pop();
					dp[i+1] = dp[i] + (i-a);
				}
			}
		}else{
			cout << dp[i] << " ";
		}
	}
	cout << endl;
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
