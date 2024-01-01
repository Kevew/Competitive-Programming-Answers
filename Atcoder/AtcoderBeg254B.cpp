#include <bits/stdc++.h>
using namespace std;

int arr[30][30];

int main(){
	int n;
	cin >> n;
	arr[0][0] = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < i;j++){
			if(j-1 >= 0){
				arr[i][j] += arr[i-1][j] + arr[i-1][j-1];
			}else{
				arr[i][j] += arr[i-1][j];
			}
		}
		arr[i][i] = 1;
		for(int j = 0;j < i+1;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
}
