#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	if(a.size() > b.size()){
		cout << "No" << endl;
		return 0;
	}
	
	bool flag = false;
	for(int i = 0;i < a.size();i++){
		if(a[i] != b[i]){
			flag = true;
			break;
		}
	}
	if(flag){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
}
