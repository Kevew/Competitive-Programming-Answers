#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m;
	cin >> n >> m;
	vector<long long> arr1(n);
	for(long long i = 0;i < n;i++){
		cin >> arr1[i];
	}
	vector<array<long long, 2>> Farr1;
	for(long long i = 0;i < n;i++){
		long long cnt = 1;
		long long x = arr1[i];
		while(x%m == 0){
			x /= m;
			cnt *= m;
		}
		
		if(!Farr1.empty() && Farr1.back()[0] == x){
			Farr1.back()[1] += cnt;
		}else{
			Farr1.push_back({x,cnt});
		}
	}
	long long k;
	cin >> k;
	vector<long long> arr2(k);
	for(long long i = 0;i < k;i++){
		cin >> arr2[i];
	}
	vector<array<long long, 2>> Farr2;
	for(long long i = 0;i < k;i++){
		long long cnt = 1;
		long long x = arr2[i];
		while(x%m == 0){
			x /= m;
			cnt *= m;
		}
		
		if(!Farr2.empty() && Farr2.back()[0] == x){
			Farr2.back()[1] += cnt;
		}else{
			Farr2.push_back({x,cnt});
		}
	}
	if(Farr1 == Farr2){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
