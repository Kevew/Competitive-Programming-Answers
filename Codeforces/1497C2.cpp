#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int tempn = n;
		tempn -= k;
		int ans = 0;
		for(int i = 0;i < k-3;i++){
			cout << "1 ";
		}
		n -= k-3;
		if(n%2 == 1){
			cout << "1 " << n/2 << " " << n/2 << " " << endl;
		}else{
			if(n&2){
				cout << "2 " << n/2-1 << " " << n/2-1 << endl;
			}else{
				cout << n/4 << " " << n/4 << " " << n/2 << endl;
			}
		}
	}
}
