#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int tempn = n;
	tempn -= ((n+1)%2);
	tempn /= 2;
	if(tempn < m){
		cout << "-1" << endl;
		return;
	}else{
		int n1 = n-m+1;
		int test = 1;
		for(int i = 0;i < n;i++){
			if(i%2 == 1 && m > 0){
				cout << n1 << " ";
				n1++,m--;
			}else{
				cout << test << " ";
				test++;
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
