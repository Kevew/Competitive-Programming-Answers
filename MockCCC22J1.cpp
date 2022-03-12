#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i,j;
	cin >> i >> j;
	i *= i;
	j *= j;
	if(abs(n-i) > abs(n-j)){
		cout << "2" << endl;
	}else{
		cout << "1" << endl;
	}
}
