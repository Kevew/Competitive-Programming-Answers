#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,r;
	cin >> l >> r;
	string a;
	cin >> a;
	reverse(a.begin()+l-1,a.begin()+r);
	cout << a << endl;
}
