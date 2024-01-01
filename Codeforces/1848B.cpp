#include <bits/stdc++.h>
using namespace std;

map<int,int> prevE;

void solve(){
	prevE.clear();
	int n,m;
	cin >> n >> m;
	int arr[n+1];
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
	}
	map<int,multiset<int>> distance;
	for(int i = 1;i <= n;i++){
		int dist = i - prevE[arr[i]] - 1;
		distance[arr[i]].insert(dist);
		prevE[arr[i]] = i;
	}
	
	for(auto i: distance){
		int dist = (n+1) - prevE[i.first] - 1;
		distance[i.first].insert(dist);
	}
	/*
	for(auto i: distance){
		cout << i.first << " T" << endl;
		for(auto j: i.second){
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
	*/
	int ans = 1e9;
	
	for(auto i: distance){
		auto j = i.second.rbegin();
		int biggest = *j;
		j++;
		int secondbiggest = *j;
		if(biggest%2 == 1){
			biggest--;
		}
		ans = min(ans,max(secondbiggest,biggest/2));
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
