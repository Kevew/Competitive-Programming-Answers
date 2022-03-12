#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

map<long long,long long> dp;

long long recur(long long curr){
	if(curr == 3 || curr == 2 || curr == 4){
		return curr;
	}
	if(dp[curr]){
		return dp[curr];
	}
	dp[curr] = 1;
	dp[curr] = (dp[curr]*recur((curr+1)/2))%MOD;
	dp[curr] = (dp[curr]*recur(curr/2))%MOD;
	return dp[curr];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	cout << recur(n) << endl;
}
