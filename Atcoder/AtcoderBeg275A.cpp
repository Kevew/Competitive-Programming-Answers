#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main(){
	int n;
	cin >> n;
	int curr = -1,index;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i] > curr){
			curr = arr[i];
			index = i+1;
		}
	}
	cout << index << endl;
}
