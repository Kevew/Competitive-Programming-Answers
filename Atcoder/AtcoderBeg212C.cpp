#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> check;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		check.push_back(a);
	}
	sort(check.begin(),check.end());
	
	int ans = 1e9;
	for(int i = 0;i < m;i++){
		cin >> a;
		auto high = upper_bound(check.begin(),check.end(),a);
		if(high != check.end()){
			ans = min(ans,abs(*high-a));
		}
		auto low = lower_bound(check.begin(),check.end(),a);
		if(low != check.end()){
			ans = min(ans,abs(*low-a));
		}
		if(low != check.begin()){
			low--;
		}
		ans = min(ans,abs(*low-a));
	}
	cout << ans << endl;
}

