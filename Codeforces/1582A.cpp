#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b,c;
	cin >> a >> b >> c;
	c%=2;
	if(c == 1 && a >= 1 && b >= 1){
		c--;
		a--;
		b--;
	}
	a%=2;
	b%=2;
	if(c == 1){
		c -= a;
		c -= b*2;
		cout << c << endl;
	}else{
		cout << abs(a-(b*2)) << endl;
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
