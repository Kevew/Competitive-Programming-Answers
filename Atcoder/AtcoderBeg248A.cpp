#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int a = 45;
	for(int i = 0;i < s.size();i++){
		a -= s[i]-'0';
	}
	cout << a << endl;
}
