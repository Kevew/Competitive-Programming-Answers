#include <bits/stdc++.h>
using namespace std;

int ans[200010],arr[200010];

void solve(){
	memset(ans,0,sizeof(ans));
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int curr = 0;
	for(int i = n-1;i >= 0;i--){
		curr = max(curr,arr[i]);
		if(curr>0){
			ans[i] = 1;
		}
		curr--;
	}
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
