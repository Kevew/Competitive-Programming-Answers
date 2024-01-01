#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long start = -1;
	for(long long i = 0;i < n;i++){
		if(arr[i] == 1){
			if(start != -1){
				cout << "NO" << endl;
				return;
			}
			start = i;
		}
		if(arr[(i+1)%n]-arr[i] >= 2){
			cout << "NO" << endl;
			return;
		}
	}
	if(start == -1){
		cout << "NO" << endl;
		return;
	}
	long long cnt = 0;
	for(long long i = start;i < n+start;i++){
		if(i == start) continue;
		if(arr[(i%n)]-1 == arr[(i-1)%n]){
			cnt++;
		}else{
			long long temp = arr[(i-1)%n]-arr[(i)%n];
			if(temp > cnt){
				cout << "NO" << endl;
				return;
			}
			cnt -= temp;
		}
	}
	cout << "YES" << endl;
}

int main(){
	ios_base::sync_with_stdio();
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
/*
1
5
1 2 3 4 1
*/
