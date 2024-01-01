#include <bits/stdc++.h>
using namespace std;

int arr[510][510];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			arr[i][j] = j+1 + (n*i);
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 1;j < n;j+=2){
			swap(arr[i][j],arr[i][j-1]);
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
