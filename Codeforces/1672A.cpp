#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int dis = 0;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		dis += a-1;
	}
	if(dis%2 == 0){
		cout << "maomao90" << endl;
	}else{
		cout << "errorgorn" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
