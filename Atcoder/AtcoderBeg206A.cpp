#include <bits/stdc++.h>
using namespace std;

int main(){
	double a;
	cin >> a;
	a *= 1.08;
	a = (int)a;
	if(a < 206){
		cout << "Yay!" << endl;
	}else if(a == 206){
		cout << "so-so" << endl;
	}else{
		cout << ":(" << endl;
	}
}
