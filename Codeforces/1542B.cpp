#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,a,b;
	cin >> n >> a >> b;
	if(a==1){
		if((n-1)%b==0){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}else{
		long long temp = 1;
		while(temp <= n){
			if((n-temp)%b==0){
				cout << "Yes" << endl;
				return;
			}
			temp = temp*a;
		}
		cout << "No" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
