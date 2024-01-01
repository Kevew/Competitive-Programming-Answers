#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> ans;

void recur(int curr){
	if(curr > n){
		return;
	}
	int newadd = ans.size();
	ans.push_back(curr);
	for(int i = 0;i < newadd;i++){
		ans.push_back(ans[i]);
	}
	recur(curr+1);
}

int main(){
	cin >> n;
	recur(1);
	for(auto i: ans){
		cout << i << " ";
	}
}
