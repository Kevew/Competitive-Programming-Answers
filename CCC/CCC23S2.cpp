#include <bits/stdc++.h>
using namespace std;

int arr[5010];
int diff[5010][5010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			diff[i][j] = abs(arr[i]-arr[j]);
		}
	}
	/*
	3 1 4 1 5 9 2
	- - - - - - -
	
	*/
	int ans[5010];
	for(int i = 0;i <= n;i++){
		ans[i] = 1e9;
	}
	for(int i = 0;i < n;i++){
		int prevEven = 0,prevOdd = 0;
		for(int j = 2;j <= n;j++){
			if((i+(j/2)-1 >= n || i-(j/2) < 0) && j%2 == 0){
				break;
			}
			if((i+(j/2) >= n || i-(j/2) < 0) && j%2 == 1){
				break;
			}
			if(j%2 == 0){
				prevEven += diff[i+(j/2)-1][i-(j/2)];
				ans[j] = min(ans[j], prevEven);
			}else{
				prevOdd += diff[i+(j/2)][i-(j/2)];
				ans[j] = min(ans[j],prevOdd);
			}
		}
	}
	ans[1] = 0;
	for(int i = 0;i < n;i++){
		cout << ans[i+1] << " ";
	}
	cout << endl;
}
