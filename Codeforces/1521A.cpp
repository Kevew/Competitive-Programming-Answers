#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b;
	cin >> a >> b;
	if(b == 1){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	cout << a << " " << a*b << " " << (a*b)+a << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
