#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	if(n == 2){
		cout << "No" << endl;
		return;
	}
	cout << "Yes" << endl;
	bool check = false;
	long long i = 0;
	while((i*(i+1)) <= n){
		if(i*(i+1) == n){
			check = true;
			break;
		}
		i++;
	}
	if(check){
		cout << "2 ";
		for(long long i = 1;i < n-1;i++){
			cout << 2*i*(i+1) << " ";
		}
		cout << (n-1)*2 << endl;
	}else{
		for(long long i = 1;i < n;i++){
			cout << i*(i+1) << " ";
		}
		cout << n << endl;
	}
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
