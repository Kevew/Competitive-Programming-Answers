#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	int n = a.size();
	if(n%2 == 1){
		cout << "NO" << endl;
		return;
	}
	string b = a.substr(0,n/2);
	string c = a.substr(n/2,n/2);
	if(b == c){
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
