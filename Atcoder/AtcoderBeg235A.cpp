#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	string b = "";
	b += a[1];
	b += a[2];
	b += a[0];
	string c = "";
	c += a[2];
	c += a[0];
	c += a[1];
	long long ans = stoll(a) + stoll(b) + stoll(c);
	cout << ans << endl;
}
