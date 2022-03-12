#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[1010];

void solve(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> arr[i].first;
	}
	for(int i = 0;i < n;i++){
		cin >> arr[i].second;
	}
	sort(arr,arr+n);
	int i = 0;
	while(i < n && k >= arr[i].first){
		k += arr[i].second;
		i++;
	}
	cout << k << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
