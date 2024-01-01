#include <bits/stdc++.h>
using namespace std;

void solve(){
	map<int,pair<int,int>> check;
	int n,k;
	cin >> n >> k;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(check.count(a)){
			check[a] = {check[a].first,i};
		}else{
			check[a] = {i,i};
		}
	}
	for(int i = 0;i < k;i++){
		int b;
		cin >> a >> b;
		if(!check.count(a)){
			cout << "NO" << endl;
			continue;
		}
		if(!check.count(b)){
			cout << "NO" << endl;
			continue;
		}
		if(check[a].first <= check[b].second){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
