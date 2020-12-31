#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a;
		string syl[4];
		for(int i = 0;i < 4;i++){
			getline(cin,a);
			string temp;
			for(int j = 0;j < a.size();j++){
				if(a[j] <= 'Z' && a[j] >= 'A'){
					a[j] = tolower(a[j]);
				}
			}
			for(int j = a.size()-1;j>=0;j--){
				temp += a[j];
				if(a[j] == ' ' || a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u'){
					break;
				}
			}
			syl[i] = temp;
		}
		if(syl[0] == syl[1] && syl[1] == syl[2] && syl[2] == syl[3]){
			cout << "perfect" << endl;
		}else if(syl[0] == syl[1] && syl[2] == syl[3]){
			cout << "even" << endl;
		}else if(syl[0] == syl[2] && syl[1] == syl[3]){
			cout << "cross" << endl;
		}else if(syl[0] == syl[3] && syl[1] == syl[2]){
			cout << "shell" << endl;
		}else{
			cout << "free" << endl;
		}
	}
}
