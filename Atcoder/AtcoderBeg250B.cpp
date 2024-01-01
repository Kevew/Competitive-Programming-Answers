#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int check = 0,check2 = 0;
	for(int i = 0;i < a;i++){
		for(int x = 0;x < b;x++){
			check = check2;
			for(int j = 0;j < a;j++){
				if(check == 0){
					cout << string(c,'.');
				}else{
					cout << string(c,'#');
				}
				check = 1-check;
			}
			cout << endl;
		}
		check2 = 1-check2;
	}
}
