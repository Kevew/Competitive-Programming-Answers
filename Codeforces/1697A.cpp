#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		m -= a;
	}
	if(m >= 0){
		cout << "0" << endl;
	}else{
		cout << abs(m) << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
