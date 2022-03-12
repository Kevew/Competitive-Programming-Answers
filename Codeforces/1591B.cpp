#include <bits/stdc++.h>
using namespace std;

int arr[200010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int highest = arr[n-1],ans = 0;
	for(int i = n-2;i >= 0;i--){
		if(highest < arr[i]){
			ans++;
			highest = arr[i];
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
