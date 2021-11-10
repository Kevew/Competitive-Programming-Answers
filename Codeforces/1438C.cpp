#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int a;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a;
			if((i+j)%2==0){
				cout << a+(a%2) << " ";
			}else{
				cout << a+((a-1)%2) << " ";
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
