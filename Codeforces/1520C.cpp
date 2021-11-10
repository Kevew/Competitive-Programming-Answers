#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n == 2){
		cout << "-1" << endl;
		return;
	}
	int curr = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << curr << " ";
			curr += 2;
			if(curr > n*n){
				curr = 2;
			}
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
