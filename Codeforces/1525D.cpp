#include <bits/stdc++.h>
using namespace std;

long long arr[5010];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	vector<long long> check;
	for(long long i = 0;i < n;i++){
		if(arr[i] == 1){
			check.push_back(i);
		}
	}
	long long k = check.size();
	vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 1e9));
	dp[0][0] = 0;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j <= k;j++){
			if(dp[i][j] == 1e9){
				continue;
			}
			dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
			if(j < k && arr[i] == 0){
				dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + abs(check[j]-i));
			}
		}
	}
	
	cout << dp[n][k] << endl;
}

