#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	vector<long long> arr(n);
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	sort(arr.begin(),arr.end());
	
	vector<pair<long long,long long>> coupons(m);
	for(long long i = 0;i < m;i++){
		long long a;
		cin >> a;
		coupons[i] = {0,a};
	}
	for(long long i = 0;i < m;i++){
		long long a;
		cin >> a;
		coupons[i] = {a, coupons[i].second};
	}
	sort(coupons.begin(),coupons.end());
	reverse(coupons.begin(),coupons.end());
	long long ans = 0;
	for(long long i = 0;i < m;i++){
		auto low = lower_bound(arr.begin(),arr.end(),coupons[i].second);
		if(low != arr.end()){
			ans += *low - coupons[i].first;
			arr.erase(low);
		}
	}
	for(long long i = 0;i < arr.size();i++){
		ans += arr[i];
	}
	cout << ans << endl;
}
