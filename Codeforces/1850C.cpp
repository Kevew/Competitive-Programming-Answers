#include <bits/stdc++.h>
using namespace std;

void solve(){
	string arr[8];
	for(int i = 0;i < 8;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < 8;i++){
		string ans = "";
		for(int j = 0;j < 8;j++){
			if(arr[j][i] != '.'){
				ans += arr[j][i];
			}
		}
		if(ans != ""){
			cout << ans << endl;
			return;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
