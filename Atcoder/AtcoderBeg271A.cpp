#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	if(a/16 > 9){
		cout << (char)('A'+(a/16-10));
	}else{
		cout << a/16;
	}
	a = a-(a/16)*16;
	if(a > 9){
		cout << (char)('A'+(a-10));
	}else{
		cout << a;
	}
}
