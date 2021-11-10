#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(i == n-1){
			if(a[i] != '0'){
				ans += a[i]-'0';
			}
		}else{
			if(a[i] != '0'){
				ans += a[i]-'0';
				ans++;
			}
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
