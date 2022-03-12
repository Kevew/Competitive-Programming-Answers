#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	int total = n*k;
	if(k == 1){
		cout << "YES" << endl;
		for(int i = 0;i < n;i++){
			cout << i+1 << endl;
		}
		return;
	}
	if(total%2 == 0){
		if(n == 1){
			cout << "NO" << endl;
			return;
		}
		if(n%2 == 1){
			cout << "NO" << endl;
			return;
		}
		cout << "YES" << endl;
		int odd = 1,even = 2;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < k;j++){
				if(i%2 == 0){
					cout << odd << " ";
					odd += 2;
				}else{
					cout << even << " ";
					even += 2;
				}
			}
			cout << endl;
		}
	}else{
		cout << "NO" << endl;
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
