#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long ans = 0;
	int n;
	cin >> n;
	long long a;
	for(int i = 0;i < n;i++){
		cin >> a;
		ans = max(ans,a-(i+1));
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
