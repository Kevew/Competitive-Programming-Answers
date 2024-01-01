#include <bits/stdc++.h>
using namespace std;

int arr[100010];
int dp[100010];

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		dp[i] = 2e9;
	}
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	dp[0] = 0;
	for(int i = 0;i < n;i++){
		for(int j = 1;j <= k;j++){
			dp[i+j] = min(dp[i+j],dp[i] + abs(arr[i+j]-arr[i]));
		}
	}
	cout << dp[n-1] << endl;
}
