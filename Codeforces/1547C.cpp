#include <bits/stdc++.h>
using namespace std;

int a[310],b[310];

void solve(){
	int k,n,m;
	cin >> k >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < m;i++){
		cin >> b[i];
	}
	
	bool fail = false;
	int l1 = 0,l2 = 0;
	vector<int> ans;
	while(l1 < n || l2 < m){
		while(l1 < n && a[l1] == 0){
			ans.push_back(0);
			l1++;
			k++;
		}
		while(l2 < m && b[l2] == 0){
			ans.push_back(0);
			l2++;
			k++;
		}
		if(l1 == n && l2 == m){
			break;
		}
		if(l1 < n && a[l1] <= k){
			ans.push_back(a[l1]);
			l1++;
			continue;
		}
		if(l2 < m && b[l2] <= k){
			ans.push_back(b[l2]);
			l2++;
			continue;
		}
		fail = true;
		break;
	}
	if(fail){
		cout << "-1" << endl;
	}else{
		for(int i = 0;i < n+m;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
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
