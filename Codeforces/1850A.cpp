#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	vector<int> arr;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	sort(arr.begin(),arr.end());
	a = arr[1];
	b = arr[2];
	if(a+b >= 10){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
