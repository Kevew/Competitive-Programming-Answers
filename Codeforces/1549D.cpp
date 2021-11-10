#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

void solve(){
	long long n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long curr = 0,ans = 1,prev = 1;
	for(int i = 0;i < n-1;i++){
		if(__gcd(abs(arr[i]-arr[i+1]),prev) == 1){
			if(abs(arr[i]-arr[i+1]) == 1){
				curr = 1;
			}else{
				curr = 2;
			}
			ans = max(ans,curr);
			prev = abs(arr[i]-arr[i+1]);
		}else{
			curr++;
			ans = max(ans,curr);
			prev = __gcd(abs(arr[i]-arr[i+1]),prev);
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

