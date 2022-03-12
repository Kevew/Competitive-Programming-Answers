#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	if(a >= 0){
		cout << (a/10) << endl;
	}else{
		a = abs(a);
		cout << 0-((a+9)/10) << endl;
	}
}
