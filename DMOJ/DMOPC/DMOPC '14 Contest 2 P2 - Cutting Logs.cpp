#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	string b;
	cin >> a >> b;
	vector<string> print;
	string temp = "";
	for(int i = 0;i < a;i++){
		if(b[i] == 'X'){
			if(temp.size() > 0){
				print.push_back(temp);
				temp = "";
			}
		}else{
			temp += "O";
		}
	}
	if(temp.size() > 0){
		print.push_back(temp);
		temp = "";
	}
	cout << print.size() << endl;
	for(int i = 0;i < print.size();i++){
		cout << print[i] << endl;
	}
}
