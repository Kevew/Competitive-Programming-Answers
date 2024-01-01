#include <bits/stdc++.h>
using namespace std;

int arr[5010];

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> listarr(n,{0,0});
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			if(arr[j] > arr[i]){
				listarr[i].first++;
			}else{
				listarr[i].second++;
			}
		}
	}
	
	
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			if(arr[j] > arr[i]){
				
			}
		}
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
