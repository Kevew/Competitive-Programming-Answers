#include <bits/stdc++.h>
using namespace std;

int a[200010];
map<int,int> check;

void solve(){
	memset(a,0,sizeof(a));
	check.clear();
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int ans = 2*n-1;
	for(int i=1;i+1<n;i++){
		ans += (a[i] < min(a[i-1],a[i+1])) + (a[i] > max(a[i-1],a[i+1]));
	}
	int j,k;
	for(int i = 1;i+2<n; i++){
		if(a[i]!=a[i+1]){
			j = min(a[i],a[i+1]);
			k = max(a[i],a[i+1]);
			ans += (j < min(a[i-1],a[i+2])&&k > max(a[i-1],a[i+2]));
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
