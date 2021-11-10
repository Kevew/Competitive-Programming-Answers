#include <bits/stdc++.h>
using namespace std;

long long l[200010],r[200010];
long long dp[200010][2];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < 200010;i++){
		l[i] = 1e18;
		r[i] = -1e18;
	}
	for(long long i = 0;i < n;i++){
		long long a,b;
		cin >> a >> b;
		l[b] = min(l[b],a);
		r[b] = max(r[b],a);
	}
	
	long long total = 0;
	vector<pair<long long,long long>> check;
	check.push_back({0,0});
	for(long long i = 1;i <= n;i++){
		if(l[i] != 1e18){
			total++;
			check.push_back({l[i],r[i]});
		}
	}
	total++;
	check.push_back({0,0});
	for(long long i = 1;i <= total;i++){
		long long left1 = check[i-1].first,right1 = check[i-1].second;
		long long left2 = check[i].first,right2 = check[i].second;
		dp[i][0] = min(dp[i-1][0]+abs(right1-left2),dp[i-1][1]+abs(left1-left2)) + right2-left2;
		dp[i][1] = min(dp[i-1][0]+abs(right1-right2),dp[i-1][1]+abs(left1-right2)) + right2-left2;
	}
	cout << min(dp[total][0],dp[total][1]) << endl;
}
