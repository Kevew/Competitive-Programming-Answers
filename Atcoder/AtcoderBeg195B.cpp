#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,w;
	cin >> n >> m >> w;
	w *= 1000;
	int curr = 0,i = 0;
	int minimum = 1e9,maximum = 0;
	for(int i = 1;i <= 1000000;i++){
		if(n*i <= w && w <= i*m){
			minimum = min(minimum,i);
			maximum = max(maximum,i);
		}
	}
	if(minimum == 1e9){
		cout << "UNSATISFIABLE" << endl;
	}else{
		cout << minimum << " " << maximum << endl;
	}
}
