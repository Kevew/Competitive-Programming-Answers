#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int t = (b/c)*c;
	if(t >= a){
		cout << t << endl;
	}else{
		cout << "-1" << endl;
	}
}
