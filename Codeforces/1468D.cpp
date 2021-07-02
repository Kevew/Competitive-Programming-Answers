#include <bits/stdc++.h>
using namespace std;

long long firecrackers[200010];

void solve(){
	long long n,m,a,b;
	cin >> n >> m >> a >> b;
	if(a > b){
		a = (n+1)-a;
		b = (n+1)-b;
	}
	for(long long i = 1;i <= m;i++){
		cin >> firecrackers[i];
	}
	sort(firecrackers+1,firecrackers+m+1,greater<long long>());
	long long j,i;
	b--;
	for(j = 0,i = 1;i <= b-a;i++){
		j++;
		for(;j <= m && firecrackers[j]+i>b;j++);
		if(j > m){
			break;
		}
	}
	cout << i-1 << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
