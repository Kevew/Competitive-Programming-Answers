#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	vector<long long> arr(n),arr2(n);
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	vector<pair<long long,long long>> removal;
	for(long long i = 0;i < n;i++){
		cin >> arr2[i];
		removal.push_back({arr[i]-arr2[i]+1,0});
		removal.push_back({arr[i],1});
	}
	sort(removal.begin(),removal.end());
	long long ans = 0,cost = 0,addon = 0;
	for(long long i = 0;i < n*2;i++){
		if(removal[i].second == 0){
			addon++;
			if(addon == 1){
				cost = removal[i].first;
			}
		}else{
			addon--;
			if(addon == 0){
				long long temp = removal[i].first-cost;
				ans += ((temp+1)*(temp+2))/2;
			}
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
