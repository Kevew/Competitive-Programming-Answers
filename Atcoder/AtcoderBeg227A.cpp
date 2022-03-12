#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	c-=2;
	b %= a;
	c += b;
	c %= a;
	cout << c+1 << endl;
}
