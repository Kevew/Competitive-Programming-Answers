#include <bits/stdc++.h>
using namespace std;

int arr[100010];

const int f = 1e9+7;

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	cout << n/2 << endl;
	for(int i = 0;i < n-1;i+=2){
		cout << i+1 << " " << i+2 << " " << min(arr[i],arr[i+1]) << " " << f << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
