#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,s;
	cin >> n >> s;
	n = n-((n-1)/2);
	cout << s/n << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
