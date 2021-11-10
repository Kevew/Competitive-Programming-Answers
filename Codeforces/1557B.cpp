#include <bits/stdc++.h>
using namespace std;

int arr[100010],check[100010];

void solve(){
	unordered_map<int,int> pos;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> check[i];
		arr[i] = check[i];
	}
	sort(check,check+n);
	for(int i = 0;i < n;i++){
		pos[check[i]] = i;
	}
	
	int ans = 0;
	for(int i = 1;i < n;i++){
		if(pos[arr[i]] == pos[arr[i-1]]+1){
			continue;
		}else{
			ans++;
		}
	}
	if(ans <= m-1){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
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
