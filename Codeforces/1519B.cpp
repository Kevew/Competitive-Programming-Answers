#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	if(n*m-1 == k){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
