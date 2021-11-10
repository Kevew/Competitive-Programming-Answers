#include <bits/stdc++.h>
using namespace std;

int a[810][810],pref[810][810];

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i <= n;i++){
		pref[i][0] = 0;
		pref[0][i] = 0;
	}
	
	int l = -1,r = 1e9;
	int check = (k*k)/2+1;
	while((l+1) < r){
		int mid = l+(r-l)/2;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				pref[i+1][j+1] = pref[i+1][j] + pref[i][j+1] - pref[i][j];
				if(a[i][j] > mid){
					pref[i+1][j+1]++;
				}
			}
		}
		bool e = false;
		for(int i = 0;i < n-k+1;i++){
			for(int j = 0;j < n-k+1;j++){
				if((pref[i+k][j+k]+pref[i][j]-pref[i][j+k]-pref[i+k][j]) < check){
					e = true;
					break;
				}
			}
		}
		if(e){
			r = mid;
		}else{
			l = mid;
		}
	}
	
	cout << r << endl;
}
