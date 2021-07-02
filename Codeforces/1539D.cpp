#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	vector<pair<long long,long long>> arr;
	long long a,b;
	for(long long i = 0;i < n;i++){
		cin >> a >> b;
		arr.push_back({b,a});
	}
	sort(arr.begin(),arr.end());
	long long l = 0,r = n-1;
	long long spent = 0;
	long long ans = 0;
	while(l <= r){
		if(spent >= arr[l].first){
			spent += arr[l].second;
			ans += arr[l].second;
			l++;
			continue;
		}
		a = arr[l].first-spent;
		while(a > 0 && l <= r){
			b = min(arr[r].second,a);
			spent += b;
			ans += b*2;
			a -= b;
			arr[r].second -= b;
			if(arr[r].second == 0){
				r--;
			}
		}
	}
	cout << ans << endl;
}
