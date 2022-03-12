#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	vector<long long> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long l = 0,r = 1e18;
	while(r-l > 1){
		long long mid = (r+l)/2;
		long long sum = 0;
		for(int i = 0;i < n;i++){
			sum += min(mid,arr[i]);
		}
		if(sum/k >= mid){
			l = mid;
		}else{
			r = mid;
		}
	}
	cout << l << endl;
}
