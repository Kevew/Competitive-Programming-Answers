#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	if(a[a.size()-1] == 'A' || a[0] == 'B'){
		cout << "NO" << endl;
		return;
	}
	int bs = 0;
	for(int i = a.size()-1;i >= 0;i--){
		if(a[i] == 'B'){
			bs++;
		}else{
			bs = max(0,bs-1);
		}
	}
	if(bs > 0){
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
