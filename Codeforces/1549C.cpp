#include <bits/stdc++.h>
using namespace std;

map<int,set<int>> arr;

set<int> check;

int ans;

void dfs(int curr){
	if(arr[curr].size() >= 1){
		if(*arr[curr].begin() > curr){
			check.erase(curr);
			ans--;
			for(auto i: arr[curr]){
				arr[i].erase(curr);
				check.insert(i);
				dfs(i);
			}
			arr[curr].erase(arr[curr].begin(),arr[curr].end());
		}else{
			check.erase(curr);
		}
	}else{
		check.erase(curr);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	ans = n;
	int a,b;
	for(int i = 0;i < m;i++){
		cin >> a >> b;
		if(a > b){
			swap(a,b);
		}
		check.insert(a);
		arr[a].insert(b);
		arr[b].insert(a);
	}
	
	int q;
	cin >> q;
	int f;
	while(q--){
		cin >> f;
		if(f == 1){
			cin >> a >> b;
			if(a > b){
				swap(a,b);
			}
			check.insert(a);
			arr[a].insert(b);
			arr[b].insert(a);
		}else if(f == 2){
			cin >> a >> b;
			if(a > b){
				swap(a,b);
			}
			arr[a].erase(b);
			arr[b].erase(a);
		}else{
			vector<int> gothrough;
			for(auto it = check.begin(); it != check.end(); ++it){
				gothrough.push_back(*it);
			}
			for(int i = 0;i < gothrough.size();i++){
				dfs(gothrough[i]);
			}
			cout << ans << endl;
		}
	}
}
