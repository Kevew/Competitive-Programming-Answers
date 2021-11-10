#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << max(b+c,max(a+b,a+c)) << endl;
}
