#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i = 0;i < 450;i++){
		if((i+1)*(i+1) <= n){
			ans = i+1;
		}
	}
	ans += ans-1;
	for(long long i = 2;i <= n;i++){
		long long low = 1,hi = n;
		while(low < hi){
			long long mid = low + (hi-low+1)/2;
//			cout << (((mid-1)*mid)/2)*(i+i) + (mid*i) << " " << mid << " " << i << endl;
			if((((mid-1)*mid)/2)*(i+i) + (mid*i) <= n){
				low = mid;
			}else{
				hi = mid-1;
			}
		}
		ans += low+(low-1);
	}
	cout << ans << endl;
}
// 2
// 2 8 18 32 50 72
// 2 6 10 14

