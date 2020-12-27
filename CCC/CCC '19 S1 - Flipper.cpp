#include <bits/stdc++.h>
using namespace std;

int arr[2][2] = {{1,2},{3,4}};

int main(){
	string a;
	cin >> a;
	for(int i = 0;i < a.size();i++){
		if(a[i] == 'H'){
			swap(arr[0][0],arr[1][0]);
			swap(arr[0][1],arr[1][1]);
		}else{
			swap(arr[1][0],arr[1][1]);
			swap(arr[0][0],arr[0][1]);
		}
	}
	
	cout << arr[0][0] << " " << arr[0][1] << endl;
	cout << arr[1][0] << " " << arr[1][1] << endl;
}
