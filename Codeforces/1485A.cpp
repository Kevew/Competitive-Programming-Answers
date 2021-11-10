#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	long long ans = 0;
	if(m == 1){
		m++;
		ans++;
	}
	long long curr = m+100;
	for(long long i = m;i < m+100;i++,ans++){
		long long temp = n;
		long long x = 0;
		while(temp){
			temp /= i;
			x++;
		}
		curr = min(curr,x+ans);
	}
	cout << curr << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
