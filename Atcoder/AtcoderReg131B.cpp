#include <bits/stdc++.h>
using namespace std;

string arr[710];
bool temp[5];

int h,w;

bool check(int i,int j){
	if(i >= 0 && i < h && j >= 0 && j < w){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> w;
	for(int i = 0;i < h;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < h;i++){
		for(int j = 0;j < w;j++){
			if(arr[i][j] != '.'){
				continue;
			}
			for(int a = 0;a < 5;a++){
				temp[a] = false;
			}
			if(check(i-1,j)){
				temp[arr[i-1][j]-'1'] = true;
			}
			if(check(i,j-1)){
				temp[arr[i][j-1]-'1'] = true;
			}
			if(check(i+1,j)){
				if(arr[i+1][j] != '.'){
					temp[arr[i+1][j]-'1'] = true;
				}
			}
			if(check(i,j+1)){
				if(arr[i][j+1] != '.'){
					temp[arr[i][j+1]-'1'] = true;
				}
			}
			for(int a = 0;a < 5;a++){
				if(temp[a] == false){
					arr[i][j] = '1'+a;
					break;
				}
			}
		}
	}
	
	for(int i = 0;i < h;i++){
		cout << arr[i] << endl;
	}
}
