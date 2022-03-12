#include <bits/stdc++.h>
using namespace std;

int arr[50010];

void solve(){
	long long n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	for(int i = 0;i < n;i++){
		arr[i] -= x;
	}
	int ans = 0;
	for(int i = 0,j = 0;i < n;i++){
		bool check = false;
		if(i-j >= 1 && arr[i]+arr[i-1] < 0){
			check = true;
		}
		if(i-j >= 2 && arr[i]+arr[i-1]+arr[i-2] < 0){
			check = true;
		}
		if(check){
			ans++;
			j = i+1;
		}
	}
	cout << n-ans << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
