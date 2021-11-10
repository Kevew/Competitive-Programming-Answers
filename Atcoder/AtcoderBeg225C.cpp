#include <bits/stdc++.h>
using namespace std;

long long arr[10100][10];

int main(){
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j < m;j++){
			cin >> arr[i][j];
		}
	}
	bool ans = true;
	for(long long i = 0;i < n;i++){
		long long curr = (((arr[i][0]-1)/7)*7)+1;
		long long currend = curr+6;
		if(arr[i][0] < curr || arr[i][0] > currend){
			ans = false;
		}
		if(arr[i][m-1] > currend || arr[i][m-1] < curr){
			ans = false;
		}
		if(!ans){
			break;
		}
		for(long long j = 0;j < m;j++){
			if(i > 0){
				if(arr[i][j] != arr[i-1][j]+7){
					ans = false;
					break;
				}
			}
			if(j > 0){
				if(arr[i][j] != arr[i][j-1]+1){
					ans = false;
					break;
				}
			}
		}
	}
	if(ans){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

/*
4 7
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
*/
