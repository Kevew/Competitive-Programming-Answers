#include <bits/stdc++.h>
using namespace std;

int graphthing(vector<int> a,int n){
	for(int i = 0;i < n;i++){
		a[i]--;
	}
	vector<int> used(n);
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(used[i]){
			continue;
		}
		int j = i;
		while(used[j] == false){
			used[j] = true;
			j = a[j];
		}
		ans++;
	}
	return ans;
}

bool check(int n,int m,int i,vector<int> arr){
	vector<int> curr;
	for(int j = i;j < n;j++){
		curr.push_back(arr[j]);
	}
	for(int j = 0;j < i;j++){
		curr.push_back(arr[j]);
	}
	return n-graphthing(curr,n) <= m;
}

void solve(){
	int n,m;
	cin >> n >> m;
	vector<int> arr(n);
	vector<int> cnt(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		int temp = i+1-arr[i];
		if(temp < 0){
			temp += n;
		}
		cnt[temp]++;
	}
	
	vector<int> ans;
	for(int i = 0;i < n;i++){
		if(cnt[i]+2*m >= n && check(n,m,i,arr)){
			ans.push_back(i);
		}
	}
	
	cout << ans.size() << " ";
	for(int i = 0;i < ans.size();i++){
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
