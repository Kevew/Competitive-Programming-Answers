#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		if(n <= 61 && k > 1LL<<(n-1)){
			cout << "-1" << endl;
			continue;
		}
		k--;
		int prev = 0;
		for(long long i = 1;i <= n;i++){
			if(i<=n-61||i==n||!(k>>n-1-i&1)){
				for(int j = i;j > prev;j--){
					cout << j << " ";
				}
				prev = i;
			}
		}
		cout << "\n";
	}
}
