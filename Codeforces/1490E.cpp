#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> arr;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(temp);
	}
	vector<int> test = arr;
	sort(arr.begin(),arr.end());
	long long mx = 0,sum = 0;
	for(int i = 0;i < n;i++){
        if(sum < arr[i]){
        	mx = arr[i];
		}
        sum += arr[i];
    }
    vector<int> ans;
	for(int i=0;i<n;++i) {
        if(test[i] >= mx){
        	ans.push_back(i);
		}
	}
    cout << ans.size() <<endl;
    for(int i:ans){
    	cout << i+1 << " ";
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
