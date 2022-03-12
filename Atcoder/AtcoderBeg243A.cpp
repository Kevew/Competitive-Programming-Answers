#include <bits/stdc++.h>
using namespace std;

int main(){
	int V,A,B,C;
	cin >> V >> A >> B >> C;
	int b = A+B+C;
	V = V%b;
	if(A > V){
		cout << "F" << endl;
	}else if(A+B > V){
		cout << "M" << endl;
	}else{
		cout << "T" << endl;
	}
}
