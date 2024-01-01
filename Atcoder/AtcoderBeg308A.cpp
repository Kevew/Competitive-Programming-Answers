#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[8];
	for(int i = 0;i < 8;i++){
		cin >> arr[i];
		if(arr[i]%25 != 0){
			cout << "No" << endl;
			return 0;
		}
		if(arr[i] < 100 || arr[i] > 675){
			cout << "No" << endl;
			return 0;
		}
		if(i > 0 && arr[i] < arr[i-1]){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
