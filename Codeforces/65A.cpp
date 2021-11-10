#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	if(((b*d*f>a*c*e)||(c == 0 && d)||(a == 0 && b && d)) && d){
		cout << "Ron" << endl;
	}else{
		cout << "Hermione" << endl;
	}
}
