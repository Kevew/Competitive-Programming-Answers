#include <bits/stdc++.h>
using namespace std;

long long arr[110];

void solve(){
	long long n;
	cin >> n;
	long long maximum = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		maximum = max(0LL,arr[i]);
	}
	for(int i = 0;i < n;i++){
		maximum = maximum&arr[i];
	}
	cout << maximum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
