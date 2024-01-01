#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	int i = 0;
	while(a < b){
		i++;
		a *= c;
	}
	cout << i << endl;
}
