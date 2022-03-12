#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	vector<long long> arr(n);
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	auto check = [&](long long curr) ->bool{
		vector<long long> temp;
		vector<long long> second(n,0);
		temp = arr;
		for(long long i = n-1;i >= 2;i--){
			long long res = max(0LL,min((temp[i]+second[i]-curr)/3LL,(temp[i]/3LL)));
			temp[i] -= res*3;
			second[i-1] += res;
			second[i-2] += res*2;
		}
		for(int i = 0;i < n;i++){
		//	cout << temp[i] << " ";
			if(temp[i]+second[i] < curr){
				return false;
			}
		}
		return true;
	};
	
	long long l = 1,r = 1e18;
	while(l < r){
		long long mid = l+(r-l+1)/2;
	//	cout << check(mid) << " " << mid << " " << l << " " << r << "TEST" << endl;
		if(check(mid)){
			l = mid;
		}else{
			r = mid-1;
		}
	}
	cout << l << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
/*
1	
4
3 2 10000 500
*/
