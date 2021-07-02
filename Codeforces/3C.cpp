#include <bits/stdc++.h>
using namespace std;

char arr[9];
int O,X;

bool check(int i,char c){
	if(arr[0]==c&&arr[4]==c&&arr[8]==c){
		return true;
	}
	if(arr[2]==c&&arr[4]==c&&arr[6]==c){
		return true;
	}
	return (arr[3*i]==c&&arr[3*i+1]==c&&arr[3*i+2]==c)||(arr[i]==c&&arr[i+3]==c&&arr[i+6]==c);
}

int main(){
	for(int i = 0;i < 9;i++){
		cin >> arr[i];
		if(arr[i] == '0'){
			O++;
		}else if(arr[i] == 'X'){
			X++;
		}
	}
	int wO = 0,wX = 0;
	for(int i = 0;i < 3;i++){
		wO = wO||check(i,'0');
		wX = wX||check(i,'X');
	}
	if((wO > 0 && wX > 0)||(X!=O+1&&X!=O)||(wO&&(X!=O))||(wX&&(X!=O+1))){
		cout << "illegal" << endl;
	}else if(wX){
		cout << "the first player won" << endl;
	}else if(wO){
		cout << "the second player won" << endl;
	}else if(X == O){
		cout << "first" << endl;
	}else if(X+O == 9){
		cout << "draw" << endl;
	}else{
		cout << "second" << endl;
	}
}
