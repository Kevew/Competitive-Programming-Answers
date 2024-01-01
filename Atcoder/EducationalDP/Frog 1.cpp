#include <bits/stdc++.h>
using namespace std;

int arr[200010];
int dp[200010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		dp[i] = 2e9;
	}
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	dp[0] = 0;
	for(int i = 0;i < n-1;i++){
		dp[i+1] = min(dp[i+1],dp[i] + abs(arr[i+1]-arr[i]));
		dp[i+2] = min(dp[i+2],dp[i] + abs(arr[i+2]-arr[i]));
	}
	cout << dp[n-1] << endl;
}
