#include <bits/stdc++.h>
using namespace std;

string arr[4];
string check[4] = {"H","2B","3B","HR"};

int main(){
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	for(int i = 0;i < 4;i++){
		bool ans = false;
		for(int j = 0;j < 4;j++){
			if(arr[j] == check[i]){
				ans = true;
				break;
			}
		}
		if(!ans){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl; 
	
}
