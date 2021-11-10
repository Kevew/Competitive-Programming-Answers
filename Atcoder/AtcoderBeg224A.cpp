#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	string end;
	if(a.size() >= 3){
		end = a.substr(a.size() - 3);
	}
	if(end == "ist"){
		cout << "ist" << endl;
	}else{
		cout << "er" << endl;
	}
}
