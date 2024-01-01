#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	int x,y;
	cin >> x >> y;
	bool ans = false;
	for(int i = 0;i < k;i++){
		int a,b;
		cin >> a >> b;
		int diff = abs(x-a) + abs(y-b);
		if(diff%2 == 0){
			ans = true;
		}
	}
	if(ans){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
