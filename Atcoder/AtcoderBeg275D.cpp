#include <bits/stdc++.h>
using namespace std;

map<long long,long long> dp;

long long recur(long long curr){
	if(curr == 0){
		return 1LL;
	}
	if(dp[curr] != 0){
		return dp[curr];
	}
	return dp[curr] = recur(curr/2) + recur(curr/3);
}

int main(){
	long long n;
	cin >> n;
	cout << recur(n) << endl;
}
