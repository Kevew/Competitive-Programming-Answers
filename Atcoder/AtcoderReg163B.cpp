#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	vector<long long> arr;
	for(long long i = 0;i < n;i++){
		long long a;
		cin >> a;
		arr.push_back(a);
	}
	long long a1 = arr[0];
	long long a2 = arr[1];
	sort(arr.begin() + 2,arr.end());
	long long ans = 1e18;
	for(int i = 2;i <= n-m;i++){
		long long cost = max(0LL,a1-arr[i]) + max(0LL,arr[i+m-1]-a2);
		ans = min(ans,cost);
	}
	cout << ans << endl;
	
}
/*
11 5
15 60 100 100 100 100 50 1 1 1 5

*/
