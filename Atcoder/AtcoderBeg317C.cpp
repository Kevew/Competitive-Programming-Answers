#include <bits/stdc++.h>
using namespace std;

vector<int> arr[12];
int costarr[12][12];

bool vis[12];
int ans = 0;

void dfs(int pos,int prev,int cost){
	if(!vis[pos]){
		ans = max(cost,ans);
		vis[pos] = true;
		for(auto i: arr[pos]){
			if(i != prev){
				dfs(i, pos, cost + costarr[i][pos]);
			}
		}
		vis[pos] = false;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int a,b,c;
		cin >> a >> b >> c;
		arr[a].push_back(b);
		arr[b].push_back(a);
		costarr[a][b] = c;
		costarr[b][a] = c;
	}
	
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < 12;j++){
			vis[j] = false;
		}
		
		dfs(i,-1,0);
	}
	cout << ans << endl;
	
}
