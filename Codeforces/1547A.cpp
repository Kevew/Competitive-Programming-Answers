#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a1,a2,b1,b2,f1,f2;
	cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;
	int ans = 0;
	if(a1 == b1 && b1 == f1 && max(a2,b2) > f2 && min(a2,b2) < f2){
		ans = 2;
	}else if(a2 == b2 && b2 == f2  && max(a1,b1) > f1 && min(a1,b1) < f1){
		ans = 2;
	}
	cout << ans+abs(a1-b1)+abs(a2-b2) << endl;
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
