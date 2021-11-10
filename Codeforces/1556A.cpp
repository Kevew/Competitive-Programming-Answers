#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin >> a >> b;
	if(abs(a-b)%2 == 1){
		cout << "-1" << endl;
		return;
	}
	
	if(a == 0 && b == 0){
		cout << "0" << endl;
		return;
	}
	
	if(a == b){
		cout << "1" << endl;
	}else{
		cout << "2" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
