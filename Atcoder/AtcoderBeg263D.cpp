#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,l,r;
	cin >> n >> l >> r;
	long long sum = 0;
	vector<long long> arr(n);
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		sum += arr[i];
	}

	vector<long long> biggest(n+1);
	biggest[0] = 0;
	long long curr = 0;
	for(long long i = 0;i < n;i++){
		curr += arr[i]-l;
		biggest[i+1] = max(biggest[i],curr);
	}
	
	curr = 0;
	long long ans = 0LL;
	
	for(long long i = n-1;i >= 0;i--){
		curr += arr[i]-r;
		ans = max(ans,curr+biggest[i]);
	}
	ans = max(ans,biggest[n]);
	cout << sum-ans << endl;
	
}
