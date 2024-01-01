#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	if(a[0] == 'A' && a[n-1] == 'B'){
		cout << "No" << endl;
	}else{
		if(a[0] == 'B' && a[n-1] == 'A' && n == 2){
			cout << "No" << endl;
			return 0;
		}
		cout << "Yes" << endl;
	}
}
