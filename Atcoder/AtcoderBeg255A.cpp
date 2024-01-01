#include <bits/stdc++.h>
using namespace std;

int arr[2][2];

int main(){
	int a,b;
	cin >> a >> b;
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			cin >> arr[i][j];
		}
	}
	cout << arr[a-1][b-1] << endl;
}
