#include <bits/stdc++.h>
using namespace std;

int arr[3];

void solve(){
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	if(arr[2] == arr[0]+arr[1]){
		cout << "YES" << endl;
	}else{
		if(arr[0] == arr[1] && arr[2]%2 == 0){
			cout << "YES" << endl;
		}else if(arr[0] == arr[2] && arr[1]%2 == 0){
			cout << "YES" << endl;
		}else if(arr[1] == arr[2] && arr[0]%2 == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
