#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr(5);
	for(int i = 0;i < 5;i++){
		cin >> arr[i];
	}
	
	sort(arr.begin(),arr.end());
	if(arr[0] == arr[1] && arr[1] == arr[2] && arr[3] == arr[4] && arr[3] != arr[2]){
		cout << "Yes" << endl;
	}else if(arr[0] == arr[1] && arr[2] == arr[3] && arr[3] == arr[4] && arr[1] != arr[2]){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
