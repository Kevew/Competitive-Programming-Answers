#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n;

int check(){
	vector<int> st;
	int ans = arr[0]^arr[1];
	for(int i = 0;i < n;i++){
		while(!st.empty() && st.back() < arr[i]){
			st.pop_back();
		}
		st.push_back(arr[i]);
		if(st.size() >= 2){
			ans = max(ans,st[st.size()-1]^st[st.size()-2]);
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(temp);
	}
	int ans = check();
	reverse(arr.begin(),arr.end());
	ans = max(ans,check());
	cout << ans << endl;
}
