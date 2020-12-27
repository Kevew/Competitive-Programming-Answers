#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int year,month,day;
		cin >> year >> month >> day;
		if(2007-year > 18){
			cout << "Yes" << endl;
		}else if(2007-year == 18){
			if(2-month > 0){
				cout << "Yes" << endl;
			}else if(2-month == 0){
				if(27-day >= 0){
					cout << "Yes" << endl;
				}else{
					cout << "No" << endl;
				}
			}else{
				cout << "No" << endl;
			}
		}else{
			cout << "No" << endl;
		}
	}
}
