#include <bits/stdc++.h>
using namespace std;

int main(){
	long long ans = 0;
	long long s,t;
	cin >> s >> t;
	for(int i = 0;i <= 100;i++){
		for(int j = 0;j <= 100;j++){
			for(int x = 0;x <= 100;x++){
				if(i+j+x > s){
					break;
				}
				if(i+j+x <= s && i*j*x <= t){
					ans++;
				}
			}
		}
	}
	
	cout << ans << endl;
}
