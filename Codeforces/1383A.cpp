#include <bits/stdc++.h>
using namespace std;

long long arr[30];

long long check(long long x){ return arr[x]==x?x:arr[x]=check(arr[x]); }

void solve(){
	for(long long i = 0;i < 21;i++){
		arr[i] = i;
	}
	long long n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	for(long long i = 0;i < n;i++){
		arr[check(a[i]-'a')] = check(b[i]-'a');
		if(a[i] > b[i]){
			cout << "-1" << endl;
			return;
		}
	}
	long long ans = 21;
	for(long long i = 0;i < 21;i++){
		ans -= (arr[i]==i);
	}
	cout << ans << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}


//aab
//dcc

