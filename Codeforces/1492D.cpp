#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,k;
	cin >> a >> b >> k;
	string s = "";
	for(int i = 0;i < b;i++){
		s += "1";
	}
	for(int i = 0;i < a;i++){
		s += "0";
	}
	if(k == 0){
		cout << "YES" << endl;
		cout << s << endl << s << endl;
		return 0;
	}
	int n = a+b;
	for(int i = 1;i+k < n;i++){
		if(s[i] == '1' && s[i+k] == '0'){
			cout << "Yes\n" << s << endl;
			swap(s[i],s[i+k]);
			cout << s << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	
	
}
