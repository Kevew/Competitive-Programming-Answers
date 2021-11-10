#include <bits/stdc++.h>
using namespace std;

//Linear Diophantine Equations
//Extended Euclidean Algorithm

long long gcd(long long a,long long b,long long &x,long long &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}
	long long d = gcd(b,a%b,x,y);
	long long t = x;
	x=y;
	y=t-y*(a/b);
	return d;
}

int main(){
	long long x0 = 0,y0 = 0;
	long long a,b,c;
	cin >> a >> b >> c;
	long long gcded = gcd(-b,-a,x0,y0);
	if(c%gcded){
		cout << "-1" << endl;
	}else{
		cout << y0 * (c/gcded) << ' ' << x0 * (c/gcded) << endl;
	}
}
