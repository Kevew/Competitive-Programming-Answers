#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int x = pow(10,a-1)+pow(10,c-1);
	int y = pow(10,b-1);
	cout << x << " " << y << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
