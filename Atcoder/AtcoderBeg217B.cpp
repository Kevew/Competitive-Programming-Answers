#include <bits/stdc++.h>
using namespace std;

map<string,int> ans;

int main(){
	ans["ABC"] = 1;
	ans["ARC"] = 1;
	ans["AGC"] = 1;
	ans["AHC"] = 1;
	string a;
	for(int i = 0;i < 3;i++){
		cin >> a;
		ans[a] = 2;
	}
	for(auto i: ans){
		if(i.second == 1){
			cout << i.first << endl;
		}
	}
}
