#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		int temp = sqrt(2*a-1);
		cout << (temp-1)/2 << endl;
	}
}
