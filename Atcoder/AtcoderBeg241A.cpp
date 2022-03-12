#include <bits/stdc++.h>
using namespace std;

int arr[11];

int main(){
	int curr = 0;
	for(int i = 0;i < 10;i++){
		cin >> arr[i];
	}
	curr = arr[curr];
	curr = arr[curr];
	curr = arr[curr];
	cout << curr << endl;
}
