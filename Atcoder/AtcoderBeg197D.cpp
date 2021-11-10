#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846

int main(){
	int n;
	cin >> n;
	double a1,b1,a2,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	double midx = (a2+a1)/2;
	double midy = (b2+b1)/2;
	double theta = 2*PI/n;
	double adda = a1-midx;
	double addb = b1-midy;
	double a = adda*cos(theta)-addb*sin(theta);
	double b = adda*sin(theta)+addb*cos(theta);
	a += midx;
	b += midy;
	cout << fixed << setprecision(9);
	cout << a << " " << b << endl;
}
