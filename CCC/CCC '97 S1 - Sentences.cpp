#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		cin.ignore();
		string s[30],v[30],o[30];
		for(int i = 0;i < a;i++){
			getline(cin,s[i]);
		}
		for(int i = 0;i < b;i++){
			getline(cin,v[i]);
		}
		for(int i = 0;i < c;i++){
			getline(cin,o[i]);
		}
		for(int i = 0;i < a;i++){
			for(int j = 0;j < b;j++){
				for(int k = 0;k < c;k++){
					cout << s[i] << " " << v[j] << " " << o[k] << "." << endl;
				}
			}
		}
	}
}
