#include <bits/stdc++.h>
using namespace std;

int arr[200010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	if(n == 2){
		cout << arr[0] << " " << arr[1] << endl;
		return;
	}
	int diff = 1e9,pos = 0;
	for(int i = 1;i < n;i++){
		if(diff > arr[i]-arr[i-1]){
			diff = arr[i]-arr[i-1];
			pos = i;
		}
	}
	for(int i = pos;i < n;i++){
		cout << arr[i] << " ";
	}
	for(int i = 0;i < pos;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
