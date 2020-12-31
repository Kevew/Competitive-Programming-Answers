#include <bits/stdc++.h>
using namespace std;

map<string,char> arr;

int main(){
	int N;
	cin >> N;
	for(int i = 0;i < N;i++){
		char temp;
		string a;
		cin >> temp >> a;
		arr[a] = temp;
	}
	string check;
	cin >> check;
	for(int i = 0;i < check.size();){
		for(auto test:arr){
			if(i+test.first.size() <= check.size() && check.substr(i,test.first.size()) == test.first){
				i+=test.first.size();
				cout << test.second;
			}
		}
	}
}
