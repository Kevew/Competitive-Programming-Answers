#include <bits/stdc++.h>
using namespace std;

long long arr[150];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j < n;j++){
			for(int x = i;x <= j;x++){
				if(arr[x] == 0){
					ans += 2;
				}else{
					ans += 1;
				}
			}
		}
	}
	cout << ans << endl;
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
