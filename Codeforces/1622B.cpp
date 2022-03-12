#include <bits/stdc++.h>
using namespace std;

pair<int,pair<int,int>> arr[200010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i].second.first;
	}
	string a;
	cin >> a;
	int l = n;
	for(int i = 0;i < n;i++){
		arr[i].first = a[i]-'0';
		if(arr[i].first == 1){
			l--;
		}
		arr[i].second.second = i;
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	vector<int> ans(n);
	int r = n;
	for(int i = 0;i < n;i++){
		if(arr[i].first == 1){
			ans[arr[i].second.second] = r;
			r--;
		}else{
			ans[arr[i].second.second] = l;
			l--;
		}
	}
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
