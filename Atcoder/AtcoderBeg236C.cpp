#include <bits/stdc++.h>
using namespace std;

map<string,bool> check;
string arr[100010];

int main(){
	int n,m;
	cin >> n >> m;
	string temp;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	for(int i = 0;i < m;i++){
		cin >> temp;
		check[temp] = true;
	}
	for(int i = 0;i < n;i++){
		if(check[arr[i]]){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}
