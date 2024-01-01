#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> qua;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		if(a <= 10){
			qua.push_back({b,i});
		}
	}
	sort(qua.begin(),qua.end());
	cout << qua[qua.size()-1].second + 1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
