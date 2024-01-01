#include <bits/stdc++.h>
using namespace std;

long long arr[400010];

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	if(m != 1){
		int cnt = 0;
		for(int i = 1;i < n-1;i++){
			if(arr[i] > arr[i-1]+arr[i+1]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}else{
		cout << (n-1)/2 << endl;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
