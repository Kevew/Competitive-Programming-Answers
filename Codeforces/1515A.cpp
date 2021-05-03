#include <bits/stdc++.h>
using namespace std;

void solve(){
	vector<int> arr;
	int n,x;
	cin >> n >> x;
	int total = 0,temp;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(temp);
		total += arr[i];
		if(temp == x){
			cnt++;
		}
	}
	sort(arr.begin(),arr.end());
	if(total == x){
		cout << "NO" << endl;
		return;
	}else if(cnt == n){
		cout << "NO" << endl;
		return;
	}
	int curr = 0;
	cout << "YES" << endl;
	for(int i = 0;i < n;i++){
		if(curr + arr[i] == x){
			arr.push_back(arr[i]);
			arr.erase(arr.begin()+i);
			i--;
			continue;
		}
		curr += arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
