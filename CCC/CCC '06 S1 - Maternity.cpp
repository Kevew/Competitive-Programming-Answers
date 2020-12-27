#include <bits/stdc++.h>
using namespace std;

map<char,bool> possible;

map<char,int> p1char;
map<char,int> p2char;

int main(){
	string p1,p2;
	cin >> p1 >> p2;
	for(int i = 0;i < p1.size();i++){
		p1char[p1[i]]++;
	}
	for(int i = 0;i < p2.size();i++){
		p2char[p2[i]]++;
	}
	if(p1char['A'] >= 1 || p2char['A'] >= 1){
		possible['A'] = true;
	}
	if(p1char['a'] >= 1 && p2char['a'] >= 1){
		possible['a'] = true;
	}
	if(p1char['B'] >= 1 || p2char['B'] >= 1){
		possible['B'] = true;
	}
	if(p1char['b'] >= 1 && p2char['b'] >= 1){
		possible['b'] = true;
	}
	if(p1char['C'] >= 1 || p2char['C'] >= 1){
		possible['C'] = true;
	}
	if(p1char['c'] >= 1 && p2char['c'] >= 1){
		possible['c'] = true;
	}
	if(p1char['D'] >= 1 || p2char['D'] >= 1){
		possible['D'] = true;
	}
	if(p1char['d'] >= 1 && p2char['d'] >= 1){
		possible['d'] = true;
	}
	if(p1char['E'] >= 1 || p2char['E'] >= 1){
		possible['E'] = true;
	}
	if(p1char['e'] >= 1 && p2char['e'] >= 1){
		possible['e'] = true;
	}
	int t;
	cin >> t;
	while(t--){
		string test;
		cin >> test;
		int check = 0;
		for(int i = 0;i < 5;i++){
			check += possible[test[i]];
		}
		if(check == 5){
			cout << "Possible baby." << endl;
		}else{
			cout << "Not their baby!" << endl;
		}
	}
}
