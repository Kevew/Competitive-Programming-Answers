#include <bits/stdc++.h>
using namespace std;

map<char,bool> exist;

int main(){
	string a;
	cin >> a;
	bool upper = false,lower = false;
	for(int i = 0;i < a.size();i++){
		if(exist[a[i]]){
			cout << "No" << endl;
			return 0;
		}
		exist[a[i]] = true;
		if(a[i] >= 'a'){
			lower = true;
		}else{
			upper = true;
		}
	}
	if(lower && upper){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
