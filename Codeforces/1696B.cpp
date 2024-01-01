#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	long long ans = 0,cnt = 0;
	long long a;
	for(long long i = 0;i < n;i++){
		cin >> a;
		if(a == 0){
			if(cnt > 0){
				ans++;
			}
			cnt = 0;
		}else{
			cnt++;
		}
	}
	if(cnt > 0){
		ans++;
	}
	cout << min(ans,2LL) << endl;
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
