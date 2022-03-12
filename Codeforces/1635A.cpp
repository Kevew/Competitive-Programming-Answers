#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	long long temp;
	long long ans = 0;
	for(int i = 0;i < n;i++){
		cin >> temp;
		ans = ans|temp;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
