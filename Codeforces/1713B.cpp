#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> arr;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		if(i == 0){
			arr.push_back(a);
		}
		if(arr.size() > 0 && arr.back() != a){
			arr.push_back(a);
		}
	}
	bool check = false;
	for(int i = 1;i < arr.size()-1;i++){
		if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
			check = true;
			break;
		}
	}
	if(check){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
