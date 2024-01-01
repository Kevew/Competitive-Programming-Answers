#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int time = b*60 + c;
	int ans = 1e9;
	for(int i = 0;i < a;i++){
		int x,y;
		cin >> x >> y;
		int timer = x*60 + y;
		int check = timer;
		while(check < time){
			check += 1440;
		}
		ans = min(ans,check-time);
	}
	cout << ans/60 << " " << ans%60 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
