#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	string a,b;
	cin >> a >> b;
	
	bool one = false;
	bool zero = false;
	for(int i = 0;i <= n-m;i++){
		if(a[i] == '0'){
			zero = true;
		}else if(a[i] == '1'){
			one = true;
		}
	}
	
	if(a[n-m] != b[0]){
		if(b[0] == '1' && one){
			a[n-m] = '1';
		}else if(b[0] == '0' && zero){
			a[n-m] = '0';
		}
	}
	bool ans = false;
	for(int i = 0;i < m;i++){
		if(a[i+(n-m)] != b[i]){
			ans = true;
		}
	}
	
	
	if(!ans){
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
