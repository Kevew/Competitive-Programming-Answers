#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	if(c%2 == 0){
		a = abs(a),b = abs(b);
		if(a == b){
			cout << "=" << endl;
			return 0;
		}
		if(a > b){
			cout << ">" << endl;
		}else{
			cout << "<" << endl;
		}
	}else{
		if(a == b){
			cout << "=" << endl;
			return 0;
		}
		if(a < 0 && b < 0){
			if(a > b){
				cout << ">" << endl;
			}else{
				cout << "<" << endl;
			}
		}else if(a < 0){
			cout << "<" << endl;
		}else if(b < 0){
			cout << ">" << endl;
		}else{
			if(a > b){
				cout << ">" << endl;
			}else{
				cout << "<" << endl;
			}
		}
	}
}
