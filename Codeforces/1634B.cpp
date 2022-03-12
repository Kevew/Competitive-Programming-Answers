#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

void solve(){
	long long n,x,y;
	cin >> n >> x >> y;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		x ^= arr[i];
	}
	
	if(x%2 == y%2){
		cout << "Alice" << endl;
	}else{
		cout << "Bob" << endl;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
