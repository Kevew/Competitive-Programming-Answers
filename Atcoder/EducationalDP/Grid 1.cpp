#include <bits/stdc++.h>
using namespace std;

long long dp[1010][1010];
string arr[1010];

long long MOD = 1e9+7;

int main(){
	long long h,w;
	cin >> h >> w;
	for(long long i = 0;i < h;i++){
		cin >> arr[i];
	}
	
	dp[0][0] = 1;
	for(long long i = 0;i < h;i++){
		for(long long j = 0;j < w;j++){
			if(arr[i][j] != '#'){
				dp[i+1][j] = (dp[i+1][j]+dp[i][j])%MOD;
				dp[i][j+1] = (dp[i][j+1]+dp[i][j])%MOD;
			}
		}
	}
	cout << dp[h-1][w-1] << endl;
}
