#include <bits/stdc++.h>
using namespace std;

int arr[100010][3];
int dp[100010][3];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	memset(dp,-1,sizeof(dp));
	for(int i = 0;i < 3;i++){
		dp[0][i] = arr[0][i];
	}
	
	for(int i = 1;i < n;i++){
		dp[i][0] = arr[i][0] + max(dp[i-1][1],dp[i-1][2]);
		dp[i][1] = arr[i][1] + max(dp[i-1][0],dp[i-1][2]);
		dp[i][2] = arr[i][2] + max(dp[i-1][0],dp[i-1][1]);
	}
	cout << max(dp[n-1][0], max(dp[n-1][1],dp[n-1][2])) << endl;
	
}
