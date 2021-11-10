#include <bits/stdc++.h>
using namespace std;

long long arr[100010];
long long sorted[100010];

void solve(){
	long long n,x;
	cin >> n >> x;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		sorted[i] = arr[i];
	}
	sort(sorted,sorted+n);
	for(long long i = n-x;i < x;i++){
		if(arr[i] != sorted[i]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
/*
3
1 2 3 4 4
4 3 2 0 1
0 1 2 3 4

4 4 3 2 1
0 1 2 3 4
*/

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
