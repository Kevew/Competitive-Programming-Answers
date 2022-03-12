#include <bits/stdc++.h>
using namespace std;

int arr[510][510];
int dp[510][510];

int n;

void dfs(int x,int y,int value){
	if(value < dp[x][y]){
		dp[x][j] = value;
		
	}
}

void solve(){
	cin >> n;
	for(int i = 0;i < n*2;i++){
		for(int j = 0;j < n*2;j++){
			cin >> arr[i][j];
			dp[i][j] = 1e9;
		}
	}
	
	dfs(n,n,0);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
