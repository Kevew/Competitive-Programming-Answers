#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long l,r;
	cin >> l >> r;
	long long temp = max((r/2)+1,l);
	cout << r-temp << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
