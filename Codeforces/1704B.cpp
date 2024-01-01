#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,x;
	cin >> n >> x;
	long long low = 3e9,high = -1e9;
	long long a,cnt = -1;
	for(long long i = 0;i < n;i++){
		cin >> a;
		if(a+x < low || a-x > high){
			low = max(0LL,a-x);
			high = a+x;
			cnt++;
		}else{
			if(low <= a-x){
				low = max(low, max(0LL,a-x));
			}
			if(high >= a+x){
				high = min(high, a+x);
			}
		}
	}
	cout << cnt << endl;
	
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
