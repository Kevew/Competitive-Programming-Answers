#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n >= 60){
		if(n-60 < 10){
			cout << "22:0" << n-60;
		}else{
			cout << "22:" << n-60;
		}
	}else{
		if(n < 10){
			cout << "21:0" << n;
		}else{
			cout << "21:" << n;
		}
	}
}
