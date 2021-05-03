#include <bits/stdc++.h>
using namespace std;

int boy[200010],girl[200010],arr[200010][2];

void solve(){
	memset(arr,0,sizeof(arr));
	int a,b,k;
	cin >> a >> b >> k;
	for(int i = 0;i < k;i++){
		cin >> boy[i];
		arr[boy[i]][0]++;
	}
	for(int i = 0;i < k;i++){
		cin >> girl[i];
		arr[girl[i]][1]++;
	}
	long long ans = k;
	for(int i = 0;i < k;i++){
		ans += k-arr[boy[i]][0]-arr[girl[i]][1];
	}
	ans /= 2;
	cout << ans << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
