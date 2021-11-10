#include <bits/stdc++.h>
using namespace std;

vector<int> paths[200010];
int arr[200010];
int flag,sum;

int dfs(int pos,int prev){
	int curr = arr[pos];
	for(auto i: paths[pos]){
		if(i != prev){
			curr ^= dfs(i,pos);
		}
	}
	if(curr == sum){
		curr = 0;
		flag++;
	}
	return curr;
}

void solve(){
	int n,k;
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		paths[i].clear();
	}
	sum = 0;
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
		sum ^= arr[i];
	}
	int a,b;
	for(int i = 0;i < n-1;i++){
		cin >> a >> b;
		paths[a].push_back(b);
		paths[b].push_back(a);
	}
	if(sum == 0){
		cout << "YES" << endl;
	}else if(k == 2){
		cout << "NO" << endl;
	}else{
		flag = 0;
		dfs(1,-1);
		if(flag < 2){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
