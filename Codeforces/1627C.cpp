#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<vector<pair<int,int>>> arr(n);
	for(int i = 0;i < n-1;i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		arr[a].push_back({b,i});
		arr[b].push_back({a,i});
	}
	for(auto i: arr){
		if(i.size() >= 3){
			cout << "-1" << endl;
			return;
		}
	}
	vector<int> ans(n);
	int pos = 0;
	while(arr[pos].size() == 2){
		pos++;
	}
	int y = arr[pos][0].first;
	
	ans[arr[pos][0].second] = 3;
	int next = 3;
	while(arr[y].size() == 2){
		int t = pos == arr[y][0].first;
		next = 5-next;
		ans[arr[y][t].second] = next;
		pos = arr[y][t].first;
		swap(pos,y);
	}
	
	for(int i = 0;i < n-1;i++){
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
