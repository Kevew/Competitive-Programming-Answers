#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x,pref = 0,ans = 0;
	for(int i = 0;i < n;i++){
		cin >> x;
		ans = gcd(ans, lcm(pref, x));
		pref = gcd(x, pref);
	}
	cout << ans << endl;
}

