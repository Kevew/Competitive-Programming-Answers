#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int pos = 1;
	while(a != 0){
		pos += a;
		if(pos == 9){
			pos = 34;
		}else if(pos == 54){
			pos = 19;
		}else if(pos == 40){
			pos = 64;
		}else if(pos == 90){
			pos = 48;
		}else if(pos == 67){
			pos = 86;
		}else if(pos == 99){
			pos = 77;
		}else if(pos == 100){
			cout << "You are now on square " << pos << endl;
			break;
		}else if(pos > 100){
			pos -= a;
		}
		cout << "You are now on square " << pos << endl;
		cin >> a;
	}
	if(pos != 100){
		cout << "You Quit!" << endl;
	}else{
		cout << "You Win!" << endl;
	}
}
