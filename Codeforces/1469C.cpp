#include <bits/stdc++.h>
using namespace std;

int arr[200010];

void solve(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	bool ans = true;
	int low = arr[0],high = arr[0];
	for(int i = 1;i < n;i++){
		low = max(arr[i],low-k+1);
		high = min(arr[i]+k-1,high+k-1);
		if(low > high || low-arr[i]>k-1){
			cout << "NO" << endl;
			return;
		}
	}
	if(low == arr[n-1]){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
