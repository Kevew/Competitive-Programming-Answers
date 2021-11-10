#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,x;
	cin >> n >> x;
	vector<long long> a(n);
	for(long long i = 0;i < n;i++){
		cin >> a[i];
	}
	
	vector<bool> connected(n,false);
	vector<pair<long long,long long>> vals;
	for(long long i = 0;i < n;i++){
		vals.push_back({a[i],i});
	}
	sort(vals.begin(),vals.end());
	long long ans = 0;
	for(auto i: vals){
		long long temp = i.first;
		if(temp >= x) break;
		
		long long curr = i.second;
		while(curr > 0){
			if(connected[curr-1]) break;
			if(a[curr-1]%temp==0){
				connected[curr-1] = true;
				ans += temp;
				curr--;
			}else{
				break;
			}
		}
		
		curr = i.second;
		while(curr < n-1){
			if(connected[curr]) break;
			if(a[curr+1]%temp==0){
				connected[curr] = true;
				ans += temp;
				curr++;
			}else{
				break;
			}
		}
	}
	for(int i = 0;i < n-1;i++){
		if(!connected[i]){
			ans += x;
		}
	}
	cout << ans << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
