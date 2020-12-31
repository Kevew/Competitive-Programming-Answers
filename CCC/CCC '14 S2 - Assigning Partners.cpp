#include <bits/stdc++.h>
using namespace std;

map<string,string> partners;
string arr1[40];

int main(){
	int a;
	cin >> a;
	string name;
	for(int i = 0;i < a;i++){
		cin >> name;
		arr1[i] = name;
		partners[name] = "ON STANDBY";
	}
	
	for(int i = 0;i < a;i++){
		cin >> name;
		if(arr1[i] == name){
			cout << "bad" << endl;
			return 0;
		}else if(partners[arr1[i]] != "ON STANDBY"){
			if(partners[arr1[i]] == name){
				continue;
			}
			cout << "bad" << endl;
			return 0;
		}else{
			partners[arr1[i]] = name;
			partners[name] = arr1[i];
			continue;
		}
	}
	cout << "good" << endl;
}
