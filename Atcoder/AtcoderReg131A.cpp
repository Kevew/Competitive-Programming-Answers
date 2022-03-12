#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	b += "0";
	long long curr = stoll(b);
	curr /= 2;
	b = to_string(curr);
	cout << b + a << endl;
}
