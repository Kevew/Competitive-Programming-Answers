#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	
	int x1,y1;
	int x2,y2;
	x1 = a[0]-'a';
	y1 = a[1]-'1';
	x2 = b[0]-'a';
	y2 = b[1]-'1';
	
	int check1 = abs(x1-x2);
	int check2 = abs(y1-y2);
	int temp = min(check1,check2);
	
	cout << max(check1,check2) << endl;
	
	if(x1 > x2 && y1 > y2){
		for(int i = 0;i < temp;i++){
			cout << "LD" << endl;
		}
		x1 -= temp;
		y1 -= temp;
	}else if(x1 < x2 && y1 > y2){
		for(int i = 0;i < temp;i++){
			cout << "RD" << endl;
		}
		x1 += temp;
		y1 -= temp;
	}else if(x1 > x2 && y1 < y2){
		for(int i = 0;i < temp;i++){
			cout << "LU" << endl;
		}
		x1 -= temp;
		y1 += temp;
	}else if(x1 < x2 && y1 < y2){
		for(int i = 0;i < temp;i++){
			cout << "RU" << endl;
		}
		x1 += temp;
		y1 += temp;
	}
	
	if(x1 > x2){
		for(int i = x1;i > x2;i--){
			cout << "L" << endl;
		}
	}else if(x1 < x2){
		for(int i = x2;i > x1;i--){
			cout << "R" << endl;
		}
	}else if(y1 > y2){
		for(int i = y1;i > y2;i--){
			cout << "D" << endl;
		}
	}else{
		for(int i = y2;i > y1;i--){
			cout << "U" << endl;
		}
	}
}
