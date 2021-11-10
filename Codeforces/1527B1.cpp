#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == '0'){
			cnt++;
		}
	}
	if(cnt == 1 || cnt%2 == 0){
		cout << "BOB" << endl;
	}else{
		cout << "ALICE" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
