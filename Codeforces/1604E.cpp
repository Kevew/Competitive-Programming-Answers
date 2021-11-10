#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
int arr[100010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long ans = 0;
	map<int,pair<int,int>> prev;
	for(int i = n-1;i >= 0;i--){
		map<int,pair<int,int>> newmap;
		for(auto j: prev){
			cout << j.first << " " << j.second.first << " " << j.second.second << endl;
			if(arr[i] > j.first){
				int curr = 1,added = 0,temp = arr[i],test = arr[i];
				while(temp > j.first){
					temp = (temp+1)/2;
					test /= 2;
				}
				added = (arr[i]/j.first);
				ans +=  j.second.first*added+j.second.second;
				newmap[test] = {j.second.first,j.second.first*added+j.second.second};
			}else{
				ans +=  j.second.second;
				newmap[arr[i]] = {j.second.first,j.second.second};
			}
		}
		cout << endl;
		newmap[arr[i]].first++;
		prev = newmap;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


