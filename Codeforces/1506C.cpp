#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin >> a >> b;
	int ans = 1e9;
	int n = a.size(),m = b.size();
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int x = i,cnt = 0;
			while(x < n && (j+x-i) < m && a[x] == b[j+x-i]){
				x++;
				cnt++;
			}
			ans = min(ans,(m-cnt) + (n-cnt));
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
