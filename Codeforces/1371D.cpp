#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	if(m % n){
		cout << 2 << endl; 
	}else{
		cout << 0 << endl;
	}
	for(int i = n-1;i >= 0;i--){
		for (int j = n-1;j >= 0;j--){
			cout << (((i+j)%n*n+i)<m);
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
