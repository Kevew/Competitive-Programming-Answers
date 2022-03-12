#include <bits/stdc++.h>
using namespace std;

deque<int> ans;

int main(){
	int n;
	cin >> n;
	vector<char> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	ans.push_back(n);
	for(int i = n-1;i >= 0;i--){
		if(arr[i] == 'L'){
			ans.push_back(i);
		}else{
			ans.push_front(i);
		}
	}
	for(auto i: ans){
		cout << i << " ";
	}
}
