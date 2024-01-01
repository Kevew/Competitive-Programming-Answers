#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	a %= 998244353;
	if(a < 0){
		cout << 998244353+a << endl;
	}else{
		cout << a << endl;
	}
}
