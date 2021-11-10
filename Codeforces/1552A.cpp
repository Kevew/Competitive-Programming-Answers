#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	string b = a;
	sort(b.begin(),b.end());
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(b[i] != a[i]){
			ans++;
		}
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
