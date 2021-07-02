#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	string a;
	cin >> a;
	long long ans = 0,m = 0,destroyed = 1;
	long long i,temp;
	for(i = 1;i < n;i++){
		if(a[i-1] != a[i]){
			destroyed++;
		}else{
			m++;
		}
		m = min(m,destroyed);
	}
	m += (destroyed-m+1)/2;
	
	cout << m << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
