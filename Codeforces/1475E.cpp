#include <bits/stdc++.h>
using namespace std;

int arr[1010],fact[1010][1010];

int MOD = 1e9 + 7;

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int target = arr[n-m];
	int cnt = 0,ans = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] == target){
			ans++;
			if(i >= n-m){
				cnt++;
			}
		}
	}
	cout << fact[ans][cnt] << endl;
}
void setupfact(){
	for(int i = 0;i <= 1000;i++){
		fact[i][0] = 1;
		for(int j = 1;j <= i;j++){
			fact[i][j] = (fact[i-1][j]+fact[i-1][j-1])%MOD;
		}
	}
}

int main(){
	setupfact();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
