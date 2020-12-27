#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	for(int i = 0;i < t;i++){
		string a;
		getline(cin,a);
		a+=" ";
		string prev = "";
		for(int i = 0;i < a.size();i++){
			if(a[i] == ' '){
				if(prev.size() == 4){
					cout << "**** ";
				}else{
					cout << prev << " ";
				}
				prev = "";
			}else{
				prev+=a[i];
			}
		}
		cout << endl;
	}
}
