#include <bits/stdc++.h>
using namespace std;

int cube(int a){
	return a*a*a;
}

int main(){
	for(int i = 1000;i <= 9999;i++){
		int sum = 0;
		for(int j = 1;j <= sqrt(i);j++){
			if((i/j)*j == i){
				if(i/j == j){
					sum += j;
				}else{
					sum += i/j;
					sum += j;
				}
			}
		}
		sum -= i;
		if(sum == i){
			cout << sum << " ";
		}
	}
	cout << endl;
	
	for(int i = 100;i < 999;i++){
		int sum = 0;
		string t = to_string(i);
		sum += cube(t[0]-'0') + cube(t[1]-'0') + cube(t[2]-'0');
		if(sum == i){
			cout << sum << " ";
		}
	}
}
