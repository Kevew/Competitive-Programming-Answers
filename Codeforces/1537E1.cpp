#include <bits/stdc++.h>
using namespace std;

int k;

string check(string s){
	while(s.size() < k){
		s = s+s;
	}
	
	while(s.size() > k){
		s.pop_back();
	}
	return s;
}

int main(){
	int n;
	cin >> n >> k;
	string arr;
	cin >> arr;
	string ans = check(arr.substr(0,1));
	for(int i = 2;i <= n;i++){
		if(arr[i-1] > arr[0]){
			break;
		}
		ans = min(ans,check(arr.substr(0,i)));
	}
	cout << ans << endl;
}
