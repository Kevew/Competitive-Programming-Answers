#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,bool> check;

void solve(){
	check.clear();
	check[{-1,-1}] = false;
	int n;
	cin >> n;
	vector<pair<int,int>> arr;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		arr.push_back({a,b});
		check[{a,b}] = true;
	}
	vector<int> ans(n);
	for(int i = 0;i < n;i++){
		if(arr[i].first == arr[i].second){
			ans[i] = arr[i].first;
		}else{
			for(int j = arr[i].first;j <= arr[i].second;j++){
				pair<int,int> f;
				if(j == arr[i].first){
					f = {-1,-1};
				}else{
					f = {arr[i].first,j-1};
				}
				pair<int,int> s;
				if(j == arr[i].second){
					s = {-1,-1};
				}else{
					s = {j+1,arr[i].second};
				}
				bool success = true;
				if(s != make_pair(-1,-1)){
					if(!check[s]){
						success = false;
					}
				}
				if(f != make_pair(-1,-1)){
					if(!check[f]){
						success = false;
					}
				}
				if(success){
					check[s] = false;
					check[f] = false;
					ans[i] = j;
					break;
				}
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		cout << arr[i].first << " " << arr[i].second << " " << ans[i] << endl;
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

/*
1 1 2 2 3 3
*/
