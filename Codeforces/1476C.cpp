#include <bits/stdc++.h>
using namespace std;

long long arr[100010],f[100010],s[100010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(long long i = 0;i < n;i++){
		cin >> f[i];
	}
	for(long long i = 0;i < n;i++){
		cin >> s[i];
		if(f[i] > s[i]){
			swap(f[i],s[i]);
		}
	}
	long long curr = s[1]-f[1]+2;
	long long ans = 0;
	for(long long i = 1;i < n;i++){
		ans = max(ans,curr+arr[i]-1);
		if(i+1 < n){
			if(s[i+1] == f[i+1]){
				curr = 2;
			}else{
				curr = max(curr+2 + (f[i+1]-1)+(arr[i]-s[i+1]),(s[i+1]-f[i+1])+2);
			}
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
