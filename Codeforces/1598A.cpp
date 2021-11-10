#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	bool ans = true;
	for(int i = 0;i < n;i++){
		if(a[i] == b[i] && a[i] == '1'){
			ans = false;
			break;
		}
	}
	if(a[0] == '1'){
		ans = false;
	}else if(b[n-1] == '1'){
		ans = false;
	}
	if(ans){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
