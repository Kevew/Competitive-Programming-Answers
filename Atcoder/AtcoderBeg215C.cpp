#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	int b;
	cin >> b;
	sort(a.begin(),a.end());
	if(b == 1){
		cout << a << endl;
		return 0;
	}
	b--;
	do{
		if(b == 0){
			break;
		}
		b--;
	}while(next_permutation(a.begin(),a.end()));
	cout << a << endl;
}
