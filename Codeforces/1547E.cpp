#include <bits/stdc++.h>
using namespace std;

long long a[300010],temperature[300010];
map<long long,long long> arr;
long long ans[300010];

void solve(){
	arr.clear();
	long long n,k;
	cin >> n >> k;
	for(long long i = 0;i < n;i++){
		ans[i] = INT_MAX;
		arr[i] = INT_MAX;
	}
	for(long long i = 0;i < k;i++){
		cin >> a[i];
		a[i]--;
	}
	for(long long i = 0;i < k;i++){
		cin >> temperature[i];
		arr[a[i]] = temperature[i];
	}
	long long currscore = temperature[0]+a[0];
	for(long long i = 0;i < n;i++){
		if(arr[i] < currscore){
			currscore = arr[i];
		}
		ans[i] = currscore;
		currscore++;
	}
	
	currscore = temperature[k-1]+(n-a[k-1]);
	for(long long i = n-1;i >= 0;i--){
		if(arr[i] < currscore){
			currscore = arr[i];
		}
		ans[i] = min(ans[i],currscore);
		currscore++;
	}
	
	
	for(long long i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
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
