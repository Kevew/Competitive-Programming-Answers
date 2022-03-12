#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n,m;
	cin >> n >> m;
	int ans = 1e9;
	int x1,y1;
	int x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(y2 >= y1){
		ans = min(ans,y2-y1);
	}else{
		ans = min(ans,(m-y1)+(m-y2));
	}
	if(x2 >= x1){
		ans = min(ans,x2-x1);
	}else{
		ans = min(ans,(n-x1)+(n-x2));
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
