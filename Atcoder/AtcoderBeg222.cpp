#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	while(a.size() < 4){
		a.insert(0,"0");
	}
	cout << a << endl;
}
