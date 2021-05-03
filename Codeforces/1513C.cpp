#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9+7;

int arr[200010];

void setup(){
	for(int i = 0;i < 9;i++){
		arr[i] = 2;
	}
	arr[9] = 3;
	for(int i = 10;i < 200010;i++){
		arr[i] = (arr[i-9]+arr[i-10])%MOD;
	}
}

void solve(){
	int m;
	string n;
	cin >> n >> m;
	int ans = 0;
	for(int i = 0;i < n.size();i++){
		int x = n[n.size()-1-i]-'0';
			ans += ((m+x<10)?1:arr[m+x-10]);
            ans %= MOD;
	}
	cout << ans << "\n";
}

int main(){
	setup();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
