#include <bits/stdc++.h>
using namespace std;


int main(){
	long long n,m;
	cin >> n >> m;
	vector<long long> ans(n);
	vector<long long> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		ans[i] = arr[i]-(i+1);
	}
	
	
	long long a;
	while(m--){
		cin >> a;
		long long pos = lower_bound(ans.begin(),ans.end(),a)-ans.begin();
		if(pos == n){
			cout << arr[n-1] + (a-ans[n-1]) << endl;
		}else{
			cout << arr[pos] - (ans[pos]-a+1) << endl;
		}
	}
}
