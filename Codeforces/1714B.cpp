#include <bits/stdc++.h>
using namespace std;

int arr[200010];

void solve(){
	int diff = 0;
	map<int,int> cnt;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(cnt[arr[i]] == 0){
			diff++;
		}
		cnt[arr[i]]++;
	}
	int i = 0;
	while(diff != n-i){
		if(cnt[arr[i]] == 1){
			diff--;
		}
		cnt[arr[i]]--;
		i++;
	}
	cout << i << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
