#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	if(k == 0){
		cout << "YES" << endl;
		return;
	}
	int curr = 0;
	while(s[curr] == s[n-curr-1] && curr < (n-1)/2){
		curr++;
	}
	if(curr >= k){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
