#include <bits/stdc++.h>
using namespace std;

int arr[100010];
int vis[100010];
long long ans = 0;

void dfs(int pos){
	if(!vis[pos]){
		vis[pos] = true;
		ans++;
		dfs(arr[pos]);
	}
}

int main(){
	int n,start;
	cin >> n >> start;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		arr[i]--;
	}
	start--;
	dfs(start);
	cout << ans << endl;
	
}
