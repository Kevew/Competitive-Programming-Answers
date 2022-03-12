#include <bits/stdc++.h>
using namespace std;

long long func(long long a){
	return (a*a)+2*a+3;
}

int main(){
	long long a;
	cin >> a;
	cout << func(func(func(a)+a)+func(func(a))) << endl;
}
