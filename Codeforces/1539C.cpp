#include <bits/stdc++.h>
using namespace std;

long long ans[200010],arr[200010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m,x;
	cin >> n >> m >> x;
	long long i;
	for(i = 1;i <= n;i++){
		cin >> arr[i];
	}
	sort(arr+1,arr+1+n);
	for(i = 1;i < n;i++){
		ans[i] = arr[i+1]-arr[i];
	}
	sort(ans+1,ans+n);
	for(i = 1;i < n;i++){
		long long k = max(0LL,ans[i]-1)/x;
		if(k > m){
			break;
		}
		m -= k;
	}
	i--;
	cout << n-i << endl;
}
