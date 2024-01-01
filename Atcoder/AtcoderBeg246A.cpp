#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	if(a == c){
		cout << e << " ";
	}else{
		if(a == e){
			cout << c << " ";
		}else{
			cout << a << " ";
		}
	}
	if(b == d){
		cout << f << endl;
	}else{
		if(b == f){
			cout << d << endl;
		}else{
			cout << b << endl;
		}
	}
}
