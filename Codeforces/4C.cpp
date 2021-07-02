#include <bits/stdc++.h>
using namespace std;

map<string,int> database;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		if(database[a] == 0){
			cout << "OK" << endl;
		}else{
			cout << a << database[a] << endl;
		}
		database[a]++;
	}
}
