#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long x1,y1,x2,y2;
	cin>> x1 >> y1 >> x2 >> y2;
	
	cout << (x2-x1)*(y2-y1)+1 << endl;
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
