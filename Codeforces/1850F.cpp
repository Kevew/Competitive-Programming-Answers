#include <bits/stdc++.h>
using namespace std;

map<long long,long long> init;

void solve(){
	init.clear();
	long long n;
	cin >> n;
	long long arr[n];
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		init[arr[i]]++;
	}
	vector<pair<long long,long long>> record[n + 20];
	for(auto i: init){
		record[0].push_back({i.first,i.second});
	}
	long long ans = 0;
	for(long long i = 0;i <= n;i++){
		long long curr = 0;
		for(auto j: record[i]){
			if(i+j.first <= n){
				record[i+j.first].push_back({j.first,j.second});
			}
			curr += j.second;
		}
		
		if(i != 0){
			ans = max(ans,curr);
		}
		record[i].clear();
	}
	cout << ans << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
