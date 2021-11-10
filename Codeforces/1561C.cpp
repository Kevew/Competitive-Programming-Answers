#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> arr[100010];

void solve(){
	long long n;
	cin >> n;
	long long a,b;
	for(long long i = 0;i < n;i++){
		cin >> a;
		long long powerneeded = 0;
		for(long long j = 0;j < a;j++){
			cin >> b;
			if(powerneeded < b+1-j){
				powerneeded = b+1-j;
			}
		}
		arr[i+1] = {powerneeded,a};
	}
	arr[0] = {0,0};
	sort(arr+1,arr+1+n);
	long long ans = 0,curr = 0;
	for(long long i = 0;i < n;i++){
		if(arr[i+1].first > curr){
			ans += arr[i+1].first-curr;
			curr = curr + (arr[i+1].first-curr)+arr[i+1].second;
		}else{
			curr = curr + arr[i+1].second;
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


