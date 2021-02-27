#include <bits/stdc++.h>
using namespace std;

int tarr[1030][1030];
int arr[1030][1030];
int temp[1030][1030];

int main(){
	int t;
	cin >> t;
	int r = 1,c = 1;
	tarr[0][0] = 1;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cin >> temp[i][j];
			}
		}
		for(int i = 0;i < r;i++){
			for(int j = 0;j < c;j++){
				for(int w = 0;w < n;w++){
					for(int e = 0;e < m;e++){
						arr[i*n+w][j*m+e] = tarr[i][j]*temp[w][e];
					}
				}
			}
		}
		r*=n;
		c*=m;
		for(int i = 0;i < r;i++){
			for(int j = 0;j < c;j++){
				tarr[i][j] = arr[i][j];
			}
		}
	}
	
	int minxx = 2147483647,maxx = -2147483647;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			minxx = min(minxx,arr[i][j]);
			maxx = max(maxx,arr[i][j]);
		}
	}
	cout << maxx << endl;
	cout << minxx << endl;
	
	maxx = -2147483647;
	minxx = 2147483647;
	
	int temp = 0;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			temp+=arr[i][j];
		}
		maxx = max(maxx,temp);
		minxx = min(minxx,temp);
		temp = 0;
	}
	cout << maxx << endl;
	cout << minxx << endl;
	
	maxx = -2147483647;
	minxx = 2147483647;
	
	temp = 0;
	for(int i = 0;i < c;i++){
		for(int j = 0;j < r;j++){
			temp+=arr[j][i];
		}
		maxx = max(maxx,temp);
		minxx = min(minxx,temp);
		temp = 0;
	}
	cout << maxx << endl;
	cout << minxx << endl;
	
}
