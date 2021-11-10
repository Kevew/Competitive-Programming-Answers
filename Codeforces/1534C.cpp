#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int a[400010],b[400010],vis[400010],follow[400010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		vis[i+1] = false;
	}
	for(int i = 0;i < n;i++){
		cin >> b[i];
		follow[a[i]] = b[i];
	}
	
	long long ans = 1;
	for(int i = 1;i <= n;i++){
		int curr = i;
		if(!vis[curr]){
			do{
				vis[curr] = true;
				curr = follow[curr];
			}while(curr != i);
			ans = (ans*2)%MOD;
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
