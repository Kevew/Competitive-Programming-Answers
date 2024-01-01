#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int d = c/2;
	b += d;
	a += c-d;
	if(a > b){
		cout << "First" << endl;
	}else{
		cout << "Second" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
