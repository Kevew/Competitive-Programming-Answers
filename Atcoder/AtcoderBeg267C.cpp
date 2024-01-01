#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

int main(){
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long minus = 0;
	long long curr = 0;
	for(long long i = 0;i < m;i++){
		curr += arr[i]*(i+1);
		minus += arr[i];
	}
	long long ans = curr;
	for(long long i = m;i < n;i++){
		curr -= minus;
		minus -= arr[i-m];
		curr += arr[i]*m;
		minus += arr[i];
		ans = max(curr,ans);
	}
	cout << ans << endl;
}
