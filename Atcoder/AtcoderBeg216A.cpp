#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	char b = a[a.size()-1];
	int y = b-'0';
	int x = floor(stol(a));
	cout << x;
	if(y >= 0 && y <= 2){
		cout << "-";
	}else if(y >= 7 && y <= 9){
		cout << "+";
	}
}
