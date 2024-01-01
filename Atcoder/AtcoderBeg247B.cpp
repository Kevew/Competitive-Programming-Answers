#include <bits/stdc++.h>
using namespace std;

map<string,int> check;
string arr[2][110];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string a,b;
		cin >> a >> b;
		arr[0][i] = a;
		arr[1][i] = b;
		check[a]++;
		if(a != b){
			check[b]++;
		}
	}
	for(int i = 0;i < n;i++){
		if(check[arr[0][i]] > 1 && check[arr[1][i]] > 1){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
