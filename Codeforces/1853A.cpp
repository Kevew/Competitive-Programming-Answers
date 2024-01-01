#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	int ans = 1e9;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(i > 0 && arr[i] >= arr[i-1]){
			int dist = abs(arr[i-1]-arr[i]);
			ans = min(ans,(dist/2)+1);
		}else if(i > 0 && arr[i] < arr[i-1]){
			ans = 0;
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
