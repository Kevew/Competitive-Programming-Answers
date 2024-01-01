#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> arr(10);
	for(int i = 0;i < 10;i++){
		cin >> arr[i];
	}
	
	pair<int,int> first = {-1,-1};
	pair<int,int> second;
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 10;j++){
			if(arr[i][j] == '#'){
				if(first.first == -1 && first.second == -1){
					first = {i+1,j+1};
				}
				second = {i+1,j+1};
			}
		}
	}
	cout << first.first << " " << second.first << endl;
	cout << first.second << " " << second.second << endl;
}
