#include <bits/stdc++.h>
using namespace std;

int edges[200010];
bool vis[200010];
vector<int> ans;

int dfs(int pos){
	if(vis[pos]){
		ans.push_back(pos);
		return pos;
	}else{
		vis[pos] = true;
		int val = dfs(edges[pos]);
		if(val == -1){
			return -1;
		}
		if(val == pos){
			return -1;
		}else{
			ans.push_back(pos);
			return val;
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> edges[i+1];
	}
	
	for(int i = 1;i <= n;i++){
		if(ans.size() > 0){
			break;
		}
		if(!vis[i]){
			dfs(i);
		}
	}
	reverse(ans.begin(),ans.end());
	cout << ans.size() << endl;
	for(auto i: ans){
		cout << i << " ";
	}
	cout << endl;
}
