#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	double ans = 0,temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		ans += temp;
	}
	int f = ans/n;
	double s = ans/n;
	if((double)f == s){
		cout << "0" << endl;
	}else{
		cout << "1" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
