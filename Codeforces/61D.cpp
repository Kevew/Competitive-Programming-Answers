#include <bits/stdc++.h>
using namespace std;

vector<pair<long long,long long>> paths[100010];
long long dp[100010],value;

long long dfs(long long curr,long long prev){
	value = max(value,dp[curr]);
	for(auto a: paths[curr]){
		if(a.first != prev){
			dp[a.first] = dp[curr]+a.second;
			dfs(a.first,curr);
		}
	}
}

int main(){
	long long n;
	cin >> n;
	long long a,b,c;
	long long ans = 0;
	for(long long i = 0;i < n-1;i++){
		cin >> a >> b >> c;
		paths[a].push_back({b,c});
		paths[b].push_back({a,c});
		ans += c*2;
	}
	dfs(1,-1);
	cout << ans-value << endl;
}
