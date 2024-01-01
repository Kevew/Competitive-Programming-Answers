#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n%2 == 0){
		for(int i = 0;i < n;i++){
			if(i%2 == 0){
				if(i == n-1){
					cout << (i+1) << " ";
				}else{
					cout << (i+2) << " ";
				}
			}else{
				cout << i << " ";
			}
		}
		cout << endl;
	}else{
		cout << "1 ";
		for(int i = 2;i <= n;i++){
			if(i%2 == 0){
				cout << (i+1) << " ";
			}else{
				cout << i-1 << " ";
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

// 1 2 3  1 2 3
// 1 3 2  1 6 6
// 2 3 1  2 6 3
// 2 1 3  2 2 3
// 3 1 2  3 2 6
// 3 2 1  3 2 3

/*
1 3 4 2

*/
