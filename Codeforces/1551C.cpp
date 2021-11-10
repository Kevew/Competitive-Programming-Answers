#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
	return (a.first-a.second) < (b.first-b.second);
}

void solve(){
	int n;
	cin >> n;
	vector<string> s(n);
	vector<vector<pair<int,int>>> arr(26); 
	for(int i = 0;i < n;i++){
		cin >> s[i];
		for(int j = 0;j < 26;j++){
			int curr = count(s[i].begin(), s[i].end(), 'a'+j);
			arr[j].push_back({curr,s[i].size()-curr});
		}
	}
	
	
	int ans = 0;
	for(int i = 0;i < 26;i++){
		sort(arr[i].begin(),arr[i].end(),compare);
		int curr = 0,lower = 0;
		for(int j = n-1;j >= 0;j--){
			curr += arr[i][j].first;
			lower += arr[i][j].second;
			if(curr > lower){
				ans = max(ans,(n-j));
			}
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
