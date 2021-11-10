#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int curr = 0,i = 1,ans = 0;
	while(curr+i < n){
		curr += i;
		i += 2;
		ans++;
	}
	if(curr==n){
		ans--;
	}
	
	cout << ans+1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
