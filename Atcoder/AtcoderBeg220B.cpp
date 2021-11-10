#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin >> k;
	string a,b;
	cin >> a >> b;
	long long aint = 0;
	long long bint = 0;
	int mul = 1;
	for(int i = a.size()-1;i >= 0;i--){
		aint += (a[i]-'0')*mul;
		mul *= k;
	}
	mul = 1;
	for(int i = b.size()-1;i >= 0;i--){
		bint += (b[i]-'0')*mul;
		mul *= k;
	}
	cout << bint * aint << endl;
}
