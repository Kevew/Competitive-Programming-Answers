#include <bits/stdc++.h>
using namespace std;

void solve(){
	vector<pair<int,int>> range;
	vector<int> prefix;
	int n,m;
	cin >> n >> m;
	string a;
	cin >> a;
	vector<pair<int,int>> serange(n+1);
	vector<int> seprefix(n+1);
	int lowest = 0,highest = 0;
	int curr = 0;
	prefix.push_back(0);
	range.push_back(make_pair(0,0));
	for(int i = 0;i < n;i++){
		curr += (a[i]=='+')?1:-1;
		lowest = min(lowest,curr);
		highest = max(highest,curr);
		prefix.push_back(curr);
		range.push_back(make_pair(lowest,highest));
	}
	lowest = 0,highest = 0,curr = 0;
	for(int i = n-1;i >= 0;i--){
		curr += (a[i]=='-')?1:-1;
		lowest = min(lowest,curr);
		highest = max(highest,curr);
		seprefix[i] = curr;
		serange[i] = make_pair(lowest,highest);
	}
	
	int t1,t2;
	for(int i = 0;i < m;i++){
		cin >> t1 >> t2;
		t1--;
		int premax = range[t1].second, premin = range[t1].first;
		cout << max(premax,prefix[t1] + (serange[t2].second-seprefix[t2]))-min(premin,prefix[t1] + (serange[t2].first-seprefix[t2]))+1 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
