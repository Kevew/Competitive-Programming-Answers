#include <bits/stdc++.h>
using namespace std;

long long arr[110];

void solve(){
	int n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	long long ans = 1e9;
	for(long long i = 0;i <= 2;i++){
		for(long long j = 0;j <= 2;j++){
			long long res = 0;
			for(long long x = 0;x < n;x++){
				long long mn = 1e9;
				for(long long ones = 0;ones <= i;ones++){
					for(long long two = 0;two <= j;two++){
						long long temp = arr[x]-ones-two*2;
						if(temp >= 0 && temp%3 == 0){
							mn = min(mn,temp/3);
						}
					}
				}
				res = max(res,mn);
			}
			ans = min(ans,res+i+j);
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
