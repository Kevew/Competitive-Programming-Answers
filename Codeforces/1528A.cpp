#include <bits/stdc++.h>
using namespace std;

long long lowest[200010],highest[200010];
vector<long long> edges[200010];

long long n = 0;

pair<long long,long long> check(long long curr,long long prev){
	long long f = 0,s = 0;
	for(auto i:edges[curr]){
		if(i != prev){
			pair<long long,long long> a = check(i,curr);
			f += max(a.first + abs(lowest[curr]-lowest[i]),a.second + abs(lowest[curr]-highest[i]));
			s += max(a.first + abs(highest[curr]-lowest[i]),a.second + abs(highest[curr]-highest[i]));
		}
	}
	return {f,s};
}

void solve(){
	for(long long i = 0;i <= n;i++){
		edges[i].clear();
	}
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> lowest[i] >> highest[i];
	}
	long long a,b;
	for(long long i = 0;i < n-1;i++){
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	pair<long long, long long> ans = check(1,-1);
	cout << max(ans.first,ans.second) << endl;
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
