#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(b-1 == a || (b == 10 && a == 1)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
