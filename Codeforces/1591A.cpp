#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	bool prev = false,temp = false;
	int ans = 1;
	bool ignorea = false;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		if(a == 0){
			prev = false;
			if(!temp){
				temp = true;
			}else{
				ignorea = true;
			}
		}else{
			temp = false;
			if(prev){
				ans += 5;
			}else{
				ans += 1;
				prev = true;
			}
		}
	}
	if(ignorea){
		cout << "-1" << endl;
	}else{
		cout << ans << endl;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
