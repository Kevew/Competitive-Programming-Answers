#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	map<long long,bool> f;
	map<long long,bool> s;
	map<long long,bool> ans;
	bool ignore = false;
	for(long long i = 0;i < n;i++){
		long long a;
		cin >> a;
		if(ignore){
			continue;
		}
		ans[a] = true;
		for(auto j: s){
			if(!ans[j.first+a]){
				ignore = true;
				continue;
			}
		}
		for(auto j: f){
			s[j.first+a] = true;
		}
		f[a] = true;
	}
	if(ignore){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
