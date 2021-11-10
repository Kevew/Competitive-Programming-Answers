#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	for(int i = 0;i < a.size();i++){
		if(a[i] == '6'){
			a[i] = '9';
		}else if(a[i] == '9'){
			a[i] = '6';
		}
	}
	reverse(a.begin(),a.end());
	cout << a << endl;
}
