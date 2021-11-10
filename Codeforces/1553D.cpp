#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin >> a >> b;
	if(b.size() > a.size()){
		cout << "NO" << endl;
		return;
	}
	int bl = b.size()-1;
	for(int i = a.size()-1;i >= 0;i--){
		if(a[i] == b[bl]){
			bl--;
		}else{
			i--;
		}
	}
	if(bl >= 0){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
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


/*
aabcab
abab


ccabab
abab

ababa
ba
*/

