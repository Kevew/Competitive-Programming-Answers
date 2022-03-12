#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	int b,c;
	cin >> b >> c;
	b--,c--;
	swap(a[b],a[c]);
	cout << a << endl;
}
