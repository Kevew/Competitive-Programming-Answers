#include <bits/stdc++.h>
using namespace std;

long long arr[20];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long ans = 0;
	for(int i = 0;i < n;i++){
		long long cnt = arr[i],add = 0;
		for(int j = 0;j < n;j++){
			if(i != j){
				int temp = arr[j];
				while(temp%2 == 0){
					temp /= 2;
					cnt *= 2;
				}
				add += temp;
			}
		}
		cnt += add;
		ans = max(ans,cnt);
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
