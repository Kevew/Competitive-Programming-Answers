#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	long long n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	long long ans = 0;
	long long temp = min(n2/2,n3);
	n2 -= temp*2;
	n3 -= temp;
	ans += temp;
	temp = min(n2/2,n1/2);
	n1 -= temp*2;
	ans += temp;
	ans += min(n1,(2*n1+4*n3)/10);
	cout << ans << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

/*
2 2 2 2 2
2 2 3 3
2 4 4
3 3 4
2 2 2 4
*/
