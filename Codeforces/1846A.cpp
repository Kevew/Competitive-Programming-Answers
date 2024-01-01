#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> arr;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		arr.push_back(a-b);
	}
	sort(arr.begin(),arr.end());
	int cnt = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] <= 0){
			cnt++;
		}
	}
	cout << n-cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
