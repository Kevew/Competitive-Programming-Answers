#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	while(s[s.size()-1] == '0' && s.size() >= 0){
		s.pop_back();
	}
	string l = s;
	reverse(l.begin(),l.end());
	if(s == l){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
