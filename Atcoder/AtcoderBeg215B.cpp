#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	if(a == 1){
		cout << "0" << endl;
		return 0;
	}
	long long curr = 1,i = 0;
	while(curr <= a){
		curr *= 2;
		i++;
	}
	cout << i-1 << endl;
}
