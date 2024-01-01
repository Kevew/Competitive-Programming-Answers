#include <bits/stdc++.h>
using namespace std;

char arr[101][101];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> arr[i][j];
		}
	}
	
	vector<char> rot;
	for(int i = 0;i < n;i++){
		rot.push_back(arr[0][i]);
	}
	for(int i = 1;i < n;i++){
		rot.push_back(arr[i][n-1]);
	}
	for(int i = n-2;i >= 0;i--){
		rot.push_back(arr[n-1][i]);
	}
	for(int i = n-2;i >= 1;i--){
		rot.push_back(arr[i][0]);
	}
	char a = rot.back();
	rot.insert(rot.begin(),a);
	int j = 0;
	for(int i = 0;i < n;i++){
		arr[0][i] = rot[j];
		j++;
	}
	for(int i = 1;i < n;i++){
		arr[i][n-1] = rot[j];
		j++;
	}
	for(int i = n-2;i >= 0;i--){
		arr[n-1][i] = rot[j];
		j++;
	}
	for(int i = n-2;i >= 1;i--){
		arr[i][0] = rot[j];
		j++;
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}
