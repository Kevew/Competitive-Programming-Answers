#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a == 0 && 0 < b){
		cout << "Silver" << endl;
	}else if(0 < a && b == 0){
		cout << "Gold" << endl;
	}else{
		cout << "Alloy" << endl;
	}
}
