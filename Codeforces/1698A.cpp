#include <bits/stdc++.h>
using namespace std;

int arr[200];

void solve(){
	int n;
	cin >> n;
	int xored = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		xored = xored ^ arr[i];
	}
	for(int i = 0;i < n;i++){
		xored = xored^arr[i];
		if(xored == arr[i]){
			cout << xored << endl;
			return;
		}
		xored = xored^arr[i];
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
