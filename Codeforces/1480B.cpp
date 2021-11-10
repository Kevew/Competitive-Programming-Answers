#include <bits/stdc++.h>
using namespace std;

long long arr[100010],brr[100010];

void solve(){
	long long A,B,n;
	cin >> A >> B >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < n;i++){
		cin >> brr[i];
	}
	long long ans = 0,destroy = 0;
	for(int i = 0;i < n;i++){
		destroy += ((brr[i]-1)/A+1)*arr[i];
		ans = max(ans,arr[i]);
	}
	if(B-destroy+ans <= 0){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	
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
