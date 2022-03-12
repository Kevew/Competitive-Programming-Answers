#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	int nceil = n%m;
	int nfloor = m-nceil;
	int qceil = (n+m-1)/m;
	int qfloor = n/m;
	int offset = 0;
	for(int i = 0;i < k;i++){
		int current = offset;
		for(int j = 0;j < nceil;j++){
			cout << qceil << " ";
			for(int x = 0;x < qceil;x++){
				cout << current+1 << " ";
				current = (current+1)%n;
			}
			cout << endl;
		}
		for(int j = 0;j < nfloor;j++){
			cout << qfloor << " ";
			for(int x = 0;x < qfloor;x++){
				cout << current+1 << " ";
				current = (current+1)%n;
			}
			cout << endl;
		}
		
		offset = (offset+nceil*qceil)%n;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
