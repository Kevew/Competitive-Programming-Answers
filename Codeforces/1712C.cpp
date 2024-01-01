#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	set<long long> backtrack;
	map<long long,bool> replaceInt;
	long long ans = 0;
	backtrack.insert(arr[0]);
	for(long long i = 1;i < n;i++){
		if(replaceInt[arr[i]]){
			arr[i] = 0;
		}
		if(arr[i] < arr[i-1]){
			for(auto i: backtrack){
				if(replaceInt[i] == false){
					replaceInt[i] = true;
					ans++;
				}
			}
			if(replaceInt[arr[i]]){
				arr[i] = 0;
			}
			backtrack.clear();
		}
		backtrack.insert(arr[i]);
	}
	if(replaceInt[0]){
		ans--;
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
