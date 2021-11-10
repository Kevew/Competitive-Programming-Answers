#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m,x1,y1,x2,y2;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;
	long long a = abs(x1-x2);
	long long b = abs(y1-y2);
	long long ans = 2*(n-a)*(m-b);
	if(n-2*a > 0 && m-2*b > 0){
		ans -= (n-2*a)*(m-2*b);
	}
	cout << n*m-ans << endl;
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
