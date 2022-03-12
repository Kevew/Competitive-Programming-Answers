#include <bits/stdc++.h>
using namespace std;

bool isnotprime[1000010];

void getprimes(){
	isnotprime[0] = isnotprime[1] = false;
	for(long long i = 2;i <= 1e6;i++){
	    if(!isnotprime[i] && (long long)i * i <= 1e6){
	        for(long long j = i * i; j <= 1e6;j += i){
	        	isnotprime[j] = true;
			}
	    }
	}
}

long long arr[200010];

void solve(){
	long long n,e;
	cin >> n >> e;
	long long ans = 0;
	for(long long i = 1;i <= n;i++){
		cin >> arr[i];
	}
	
	for(long long i = 1;i <= n;i++){
		if(!isnotprime[arr[i]] && arr[i] != 1){
			long long cnt = 0;
			for(long long j = i+e;j <= n;j += e){
				if(arr[j] == 1){
					cnt++;
				}else{
					break;
				}
			}
			ans += cnt;
			for(long long j = i-e;j >= 1;j -= e){
				if(arr[j] == 1){
					ans += cnt+1;
				}else{
					break;
				}
			}

		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	getprimes();
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
