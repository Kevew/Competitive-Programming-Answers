#include <bits/stdc++.h>
using namespace std;

vector<int> arr[200010];
bool vis[200010];


int m,k;

vector<int> ans;

bool dfs(int x,int y){
	if(!vis[x]){
		vis[x] = true;
		if(x == y){
			ans.push_back(k);
			return true;
		}
		for(auto i: arr[x]){
			if(dfs(i,y)){
				ans.push_back(x);
				return true;
			}
		}
	}
	
	return false;
}

int main(){
	int n;
	cin >> n >> m >> k;
	for(int i = 0;i < n-1;i++){
		int a,b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	
	dfs(m,k);
	reverse(ans.begin(),ans.end());
	for(auto i: ans){
		cout << i << " ";
	}
}
