#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long l,r,k;
	cin >> l >> r >> k;
	if(l == r && l != 1){
		cout << "YES" << endl;
		return;
	}
	long long diff = r-l;
	diff++;
	long long cnt = (diff/2);
	if(r%2 == 0 && l%2 == 0){
		cnt++;
	}
	if(diff-cnt > k){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
