#include <bits/stdc++.h>
using namespace std;

map<int,int> check;

void solve(){
	check.clear();
	int n;
	cin >> n;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		a = abs(a);
		check[a] = min(2,check[a]+1);
		if(a == 0){
			check[a] = 1;
		}
	}
	int ans = 0;
	for(auto i: check){
		ans += i.second;
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
