#include <bits/stdc++.h>
using namespace std;

int arr[200010];

void solve(){
	int n;
	cin >> n;
	int total = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		total += arr[i];
	}
	if(total%n != 0){
		cout << "-1" << endl;
		return;
	}
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] > total/n){
			ans++;
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
