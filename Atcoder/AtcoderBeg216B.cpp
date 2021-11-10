#include <bits/stdc++.h>
using namespace std;

map<string,map<string,bool>> check;

int main(){
	int n;
	cin >> n;
	string a,b;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		if(check[a][b] == false){
			check[a][b] = true;
		}else{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
