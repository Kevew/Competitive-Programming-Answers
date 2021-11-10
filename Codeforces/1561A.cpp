#include <bits/stdc++.h>
using namespace std;

int arr[1010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int i;
	int exit = 0;
	for(i = 1;i <= 10000;i++){
		bool check = true;
		if(i%2 == 1){
			for(int j = 0;j < n-1;j+=2){
				if(arr[j] > arr[j+1]){
					swap(arr[j],arr[j+1]);
					exit = 0;
					check = false;
				}
			}
		}else{
			for(int j = 1;j < n-1;j+=2){
				if(arr[j] > arr[j+1]){
					swap(arr[j],arr[j+1]);
					exit = 0;
					check = false;
				}
			}
		}
		exit += check;
		if(exit == 2){
			break;
		}
	}
	cout << i-2 << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
