#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,x,t;
	cin >> n >> x >> t;
	long long inter = t/x;
	if(n - inter >= 0){
		cout << inter*(inter-1)/2 + inter*(n-inter) << endl;
	}else{
		cout << n*(n-1)/2 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
