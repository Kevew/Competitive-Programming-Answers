#include <bits/stdc++.h>
using namespace std;

int arr[110][110];

//There is definately a better way to write this code

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> arr[i][j];
		}
	}
	while(true){
		bool check = true;
		for(int i = 0;i < n;i++){
			for(int j = 1;j < n;j++){
				if(arr[i][j-1] > arr[i][j]){
					check = false;
					break;
				}
			}
			if(i >= 1){
				if(arr[i-1][0] > arr[i][0]){
					check = false;
					break;
				}
			}
		}
		if(check){
			for(int i = 0;i < n;i++){
				for(int j = 0;j < n;j++){
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}else{
			int ret[n][n];
			for(int i = 0; i < n;i++) {
       	 		for(int j = 0; j < n;j++) {
      	      		ret[i][j] = arr[n - j - 1][i];
        		}
    		}
    		for (int i = 0; i < n;i++) {
       	 		for (int j = 0; j < n;j++) {
      	      		arr[i][j] = ret[i][j];
        		}
    		}
		}
	}
}
