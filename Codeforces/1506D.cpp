#include <bits/stdc++.h>
using namespace std;

map<int,int> arr;

void solve(){
	arr.clear();
	int n;
	cin >> n;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr[temp]++;
	}
	priority_queue<int> mypq;
	for(auto i: arr){
		mypq.push(i.second);
	}
	int temp1,temp2;
	while(mypq.size() >= 2){
		temp1 = mypq.top();
		mypq.pop();
		temp2 = mypq.top();
		mypq.pop();
		temp1--;
		temp2--;
		if(temp1){
			mypq.push(temp1);
		}
		if(temp2){
			mypq.push(temp2);
		}
	}
	int ans = 0;
	while(mypq.size() > 0){
		ans += mypq.top();
		mypq.pop();
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
