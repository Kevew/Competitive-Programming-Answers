#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n >= 1 && n <= 125){
		cout << "4" << endl;
	}else if(n >= 126 && n <= 211){
		cout << "6" << endl;
	}else if(n <= 214 && n >= 212){
		cout << "8" << endl;
	}
}
