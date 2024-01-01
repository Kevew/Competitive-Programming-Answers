#include <bits/stdc++.h>
using namespace std;

int main(){
	long long arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	if(arr[2] <= arr[0]+arr[1]){
		cout << arr[2] << endl;
	}else{
		cout << "-1" << endl;
	}
}
