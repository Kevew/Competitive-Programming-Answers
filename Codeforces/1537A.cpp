#include <bits/stdc++.h>
using namespace std;

void solve(){
	double total = 0;
	int n;
	cin >> n;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		total += a;
	}
	if(total < n){
		cout << 1 << endl;
	}else{
		cout << total-n << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
