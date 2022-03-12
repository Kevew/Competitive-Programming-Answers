#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	if(a > 2147483647){
		cout << "No" << endl;
	}else if(a < -2147483648){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
}
