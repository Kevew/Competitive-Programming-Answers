#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		int ans = 1;
		for(int i = 2;i*i <= a;i++){
			if(a/i == (float)a/i){
				ans += i;
				ans += a/i;
				if(a/i == i){
					ans -= i;
				}
			}
		}
		if(ans == a){
			cout << a << " is a perfect number." << endl;
		}else if(ans > a){
			cout << a << " is an abundant number." << endl;
		}else{
			cout << a << " is a deficient number." << endl;
		}
	}
}
