#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	int p;
	cin >> p;
	vector<pair<int,int>> check;
	int curr = 0;
	for(int i = 0;i < a.size();i++){
		check.push_back({'z'-a[i],i});
		curr += a[i]-'a';
		curr++;
	}
	sort(check.begin(),check.end());
	int i = 0;
	while(curr > p){
		curr -= 26-check[i].first;
		i++;
	}
	vector<pair<int,int>> ans;
	for(;i < check.size();i++){
		ans.push_back({check[i].second,25-check[i].first});
	}
	sort(ans.begin(),ans.end());
	for(i = 0;i < ans.size();i++){
		cout << (char)(ans[i].second+'a');
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
