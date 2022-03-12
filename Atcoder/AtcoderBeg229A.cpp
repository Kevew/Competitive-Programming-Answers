#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	if(a[0] == '#'){
		if(b[1] == '#' && b[0] == '.' && a[1] == '.'){
			cout << "No" << endl;
			return 0;
		}
	}
	if(a[1] == '#'){
		if(b[0] == '#' && a[0] == '.' && b[1] == '.'){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
