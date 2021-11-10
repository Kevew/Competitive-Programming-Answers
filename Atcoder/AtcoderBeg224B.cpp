#include <bits/stdc++.h>
using namespace std;

int arr[51][51];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			for(int a = 0;a < n;a++){
				for(int b = 0;b < m;b++){
					if(a > i && b > j){
						if(arr[i][j]+arr[a][b] > arr[i][b]+arr[a][j]){
							cout << "No" << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
}
