#include <bits/stdc++.h>
using namespace std;

int arr[200010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	arr[n] = -1;
	int removal = 0;
	for(int i = 0;i <= n;i++){
		if(i > 0 && arr[i] < arr[i-1]){
			removal = i-1;
			break;
		}
	}
	for(int i = 0;i < n;i++){
		if(arr[i] != arr[removal]){
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}
