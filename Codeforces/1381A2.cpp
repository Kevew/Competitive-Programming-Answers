#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	vector<long long> ans,ans2;
	a += '0';
	b += '0';
	for(long long i = 1;i <= n;i++){
		if(a[i] != a[i-1]){
			ans.push_back(i);
		}
		if(b[i] != b[i-1]){
			ans2.push_back(i);
		}
	}
	
	ans.insert(ans.end(),ans2.rbegin(),ans2.rend());
	cout << ans.size() << " ";
	for(long long i = 0;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
