#include <bits/stdc++.h>
using namespace std;

vector<long long> arr[100010];
long long c[100010];

long long p1,p2,p3,n;

long long dfs(long long curr,long long prev){
	c[curr] = 1;
	for(auto i:arr[curr]){
		if(i != prev){
			dfs(i,curr);
			c[curr] += c[i];
		}
	}
	if(!p3){
		if(n - c[curr] == c[curr]){
			p3 = prev;
		}
		if(c[curr] == 1){
			p1 = prev;
			p2 = curr;
		}
	}
}

void solve(){
	p3 = 0,p1 = 0,p2 = 0;
	cin >> n;
	for(long long i = 1;i <= n;i++){
		arr[i].clear();
	}
	long long a,b;
	for(long long i = 0;i < n-1;i++){
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1,-1);
	cout << p1 << " " << p2 << endl << p2 << " " << (p3? p3:p1) << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
