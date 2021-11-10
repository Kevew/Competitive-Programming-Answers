#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3]){
		cout << "Weak" << endl;
	}else{
		bool check = false;
		for(int i = 1;i <= 3;i++){
			if(a[i]+1 != a[i-1]+2){
				if(a[i-1] == '9' && a[i] == '0'){
					continue;
				}
				check = true;
				break;
			}
		}
		if(check){
			cout << "Strong" << endl;
		}else{
			cout << "Weak" << endl;
		}
	}
}
