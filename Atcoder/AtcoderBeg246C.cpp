#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

int main(){
	long long n,k,x;
	cin >> n >> k >> x;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i] >= x){
			long long temp = min(arr[i]/x,k);
			arr[i] -= temp*x;
			k -= temp;
		}
	}
	sort(arr,arr+n,greater<long long>());
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		if(k > 0){
			k--;
			continue;
		}else{
			ans += arr[i];
		}
	}
	cout << ans << endl;
}
