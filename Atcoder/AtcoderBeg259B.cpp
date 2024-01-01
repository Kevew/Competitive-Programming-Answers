#include <bits/stdc++.h>
using namespace std;

int main(){
	double	a,b,c;
	cin >> a >> b >> c;
	c *= 3.14159265358979323/180;
	double si = sin(c);
	double co = cos(c);	
	
	double newx = a*co - b*si;
	double newy = a*si + b*co;
	
	a = newx;
	b = newy;
	cout << fixed << setprecision(15);
	cout << a << " " << b << endl;
}
