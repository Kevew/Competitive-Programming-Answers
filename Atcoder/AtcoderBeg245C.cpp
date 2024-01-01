#include <bits/stdc++.h>
using namespace std;

int arr[200010][2];

bool arr2[200010][2];

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> arr[i][0];
	}
	for(int i = 0;i < n;i++){
		cin >> arr[i][1];
	}
	arr2[0][0] = true;
	arr2[0][1] = true;
	for(int i = 1;i < n;i++){
		if(arr2[i-1][0]){
			if(abs(arr[i-1][0]-arr[i][0]) <= k){
				arr2[i][0] = true;
			}
			if(abs(arr[i-1][0]-arr[i][1]) <= k){
				arr2[i][1] = true;
			}
		}
		if(arr2[i-1][1]){
			if(abs(arr[i-1][1]-arr[i][0]) <= k){
				arr2[i][0] = true;
			}
			if(abs(arr[i-1][1]-arr[i][1]) <= k){
				arr2[i][1] = true;
			}
		}
	}
	if(arr2[n-1][0] || arr2[n-1][1]){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
