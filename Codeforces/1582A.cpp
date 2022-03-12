#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b,c;
	cin >> a >> b >> c;
	cout << (a+c)%2 << endl;
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
