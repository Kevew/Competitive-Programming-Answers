#include <bits/stdc++.h>
using namespace std;

map<int,bool> seen;
map<int,vector<int>> paths;

int arr[200010];

void dfs(int curr){
	if(!seen[curr]){
		return;
	}
	seen[curr] = false;
	for(int i = 0;i < paths[curr].size();i++){
		dfs(paths[curr][i]);
	}
}

int main(){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(!seen[arr[i]]){
			seen[arr[i]] = true;
			ans++;
		}
	}
	
	for(int i = 0;i < n/2;i++){
		paths[arr[i]].push_back(arr[n-i-1]);
		paths[arr[n-i-1]].push_back(arr[i]);
	}
	for(int i = 0;i < n;i++){
		if(seen[arr[i]]){
			ans--;
			dfs(arr[i]);
		}
	}
	cout << ans << endl;
}
