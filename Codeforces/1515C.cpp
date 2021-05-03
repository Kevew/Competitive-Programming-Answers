#include <bits/stdc++.h>
using namespace std;

int ans[100010];

void solve(){
	memset(ans,0,sizeof(ans));
	int n,m,x;
	cin >> n >> m >> x;
	vector<pair<int,int>> arr;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(make_pair(temp,i));
	}
	multiset<pair<int,int>> towers;
	for(int i = 1;i <= m;i++){
		towers.insert(make_pair(0,i));
	}
	sort(arr.begin(),arr.end(),greater<pair<int,int>>());
	for(int i = 0;i < n;i++){
		pair<int,int> curr = *towers.begin();
		towers.erase(towers.begin());
		ans[arr[i].second] = curr.second;
		curr.first += arr[i].first;
		towers.insert(curr);
	}
	pair<int,int> prev = *towers.begin();
	towers.erase(towers.begin());
	while(!towers.empty()){
		pair<int,int> curr = *towers.begin();
		towers.erase(towers.begin());
		
		if(abs(curr.first-prev.first) > x){
			cout << "NO" << endl;
			return;
		}
		prev = curr;
	}
	
	cout << "YES" << endl;
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
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
