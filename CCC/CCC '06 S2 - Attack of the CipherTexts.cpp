#include <bits/stdc++.h>
using namespace std;

map<char,char> ciper;

int main(){
	for(int i = 'A';i <= 'Z';i++){
		ciper[i] = '.';
	}
	string a,b;
	getline(cin,a);
	getline(cin,b);
	string newone;
	getline(cin,newone);
	for(int i = 0;i < a.size();i++){
		ciper[b[i]] = a[i];
	}
	for(int i = 0;i < newone.size();i++){
		cout << ciper[newone[i]];
	}
}
