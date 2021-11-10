#include <bits/stdc++.h>
using namespace std;

void solve(){
	map<int,int> temp;
	int n,x;
	cin >> n;
	long long ans = 0;
	for(int i = 0;i < n;i++){
		cin >> x;
		ans += temp[x-i];
		temp[x-i]++;
	}
	cout << ans << endl;
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
