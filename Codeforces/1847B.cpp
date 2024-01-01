#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	long long arr[n];
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long ans = 0;
	long long curr = 0;
	for(long long i = 0;i < n;i++){
		if(curr == 0){
			ans++;
			curr = arr[i];
		}
		curr = curr&arr[i];
	}
	if(curr != 0 && ans > 1){
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



/*

0000 - 0
0001 - 1
0010 - 2
0011 - 3
0100 - 4
0101 - 5

3
3
1 2 3
5
2 3 1 5 2
4
5 7 12 6


*/
