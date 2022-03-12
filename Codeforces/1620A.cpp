#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0;i < a.size();i++){
		if(a[i] == 'N'){
			ans++;
		}
	}
	if(ans == 1){
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

