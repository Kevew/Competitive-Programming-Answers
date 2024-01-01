#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	
	if((15-a)%2 == 0 && (15-b) >= (15-a) && b >= (15-a)){
		cout << "black" << endl;
	}else if(a%2 == 1 && (15-b) >= a && b >= a){
		cout << "black" << endl;
	}else if((15-b)%2 == 0 && (15-a) >= (15-b) && a >= (15-b)){
		cout << "black" << endl;
	}else if(b%2 == 1 && (15-a) >= b && a >= b){
		cout << "black" << endl;
	}else{
		cout << "white" <<  endl;
	}
}
