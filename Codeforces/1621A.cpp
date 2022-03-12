#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	if((k*2)-1 > n){
		cout << "-1" << endl;
		return;
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(i == j && i%2 == 0 && i/2 < k){
				cout << "R";
			}else{
				cout << ".";
			}
		}
		cout << endl;
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
