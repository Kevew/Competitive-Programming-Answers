#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

map<long long,vector<long long>> check;

void solve(){
	check.clear();
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		check[arr[i]].push_back(i);
	}
	for(long long i = 0;i < n;i++){
		sort(check[i].begin(),check[i].end());
	}
	long long cnt = 0;
	
	vector<long long> ans;
	while(cnt < n){
		long long i = 0,highest = -1;
		while(check[i].size() >= 1){
			highest = max(highest,check[i][0]);
			i++;
		}
		ans.push_back(i);
		if(i == 0){
			cnt++;
		}else{
			cnt = highest+1;
			i--;
			while(i >= 0){
				auto pos = lower_bound(check[i].begin(),check[i].end(),highest);
				if(*pos == highest){
					pos++;
				}
				check[i].erase(check[i].begin(),pos);
				i--;
			}
		}
	}
	cout << ans.size() << endl;
	for(long long i = 0;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	cout << endl;
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
