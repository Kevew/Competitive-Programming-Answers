#include <bits/stdc++.h>
using namespace std;

int main(){
	string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	int n;
	cin >> n;
	cout << "3.";
	for(int i = 2;i <= n+1;i++){
		cout << pi[i];
	}
}
