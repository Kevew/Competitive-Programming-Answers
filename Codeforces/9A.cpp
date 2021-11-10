#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(b > a){
		swap(a,b);
	}
	cout << (7-a)/__gcd(6,7-a) << "/" << 6/__gcd(6,7-a);
}
