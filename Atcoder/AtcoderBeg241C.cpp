#include <bits/stdc++.h>
using namespace std;

string arr[1100];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int a = 0;
			if(i+5 < n){
				for(int x = i;x < i+6;x++){
					if(arr[x][j] != '#'){
						a++;
					}
				}
				if(a <= 2){
					cout << "Yes" << endl;
					return 0;
				}
			}
			a = 0;
			if(j+5 < n){
				for(int x = j;x < j+6;x++){
					if(arr[i][x] != '#'){
						a++;
					}
				}
				if(a <= 2){
					cout << "Yes" << endl;
					return 0;
				}
			}
			a = 0;
			
			if(i+5 < n && j+5 < n){
				for(int x = 0;x < 6;x++){
					if(arr[i+x][j+x] != '#'){
						a++;
					}
				}
				if(a <= 2){
					cout << "Yes" << endl;
					return 0;
				}
			}
			a = 0;
			if(i+5 < n && j-5 >= 0){
				for(int x = 0;x < 6;x++){
					if(arr[i+x][j-x] != '#'){
						a++;
					}
				}
				if(a <= 2){
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}
