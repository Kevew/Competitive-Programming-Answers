#include <bits/stdc++.h>
using namespace std;

int arr[110];

void solve(){
	int n;
	cin >> n;
	int mini = 1e9;
	int maxi = 0;
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
		if(arr[i] == 1){
			mini = i;
		}else if(arr[i] == n){
			maxi = i;
		}
	}
	int f = min(mini,maxi);
	int s = max(mini,maxi);
	cout << min(s,min(n-f+1,f+(n-s+1))) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
