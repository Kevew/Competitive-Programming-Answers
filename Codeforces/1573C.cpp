#include <bits/stdc++.h>
using namespace std;

int n;
int check[200010];
vector<int> arr[200010];

vector<bool> vis(200010);

int dfs(int pos){
	if(check[pos] != 0){
		return check[pos];
	}
	if(vis[pos]){
		check[pos] = 1e9;
		return check[pos];
	}
	vis[pos] = true;
	int ans = 1;
	for(int i = 0;i < arr[pos].size();i++){
		int curr = dfs(arr[pos][i]);
		if(curr == 1e9){
			check[pos] = 1e9;
			vis[pos] = false;
			return 1e9;
		}else{
			if(arr[pos][i] > pos){
				curr++;
			}
			ans = max(ans,curr);
		}
	}
	check[pos] = ans;
	vis[pos] = false;
	return check[pos];
}

void solve(){
	cin >> n;
	int temp,curr;
	for(int i = 0;i < n;i++){
		arr[i].clear();
		cin >> temp;
		for(int j = 0;j < temp;j++){
			cin >> curr;
			arr[i].push_back(curr-1);
		}
	}
	memset(check,0,sizeof(check));
	for(int i = 0;i < n;i++){
		if(arr[i].size() == 0){
			check[i] = 1;
		}else{
			dfs(i);
		}
	}
	
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(check[i] == 1e9){
			ans = -1;
			break;
		}else{
			ans = max(ans,check[i]);
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
