#include <bits/stdc++.h>
using namespace std;

map<int,int> arr;

void solve(){
	arr.clear();
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		arr[a]++;
	}
	
	int ans = 0;
	for(auto i: arr){
		ans += min(i.second,m);
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
