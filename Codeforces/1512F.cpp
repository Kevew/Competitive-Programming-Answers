#include <bits/stdc++.h>
using namespace std;

long long arr[200010];
long long arrb[200010];

void solve(){
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(long long i = 0;i < n-1;i++){
		cin >> arrb[i];
	}
	long long leftover = 0,addon = 0;
	long long ans = 1e18;
	for(long long i = 0;i < n;i++){
		ans = min(ans,max(0LL,((m-leftover)+(arr[i]-1))/arr[i])+addon);
		if(i < n-1){
			long long temp = max(0LL,((arrb[i]-leftover+(arr[i]-1))/arr[i]));
			leftover += (arr[i]*temp)-arrb[i];
			addon += temp;
			addon++;
		}
	}
	cout << ans << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
