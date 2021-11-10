#include <bits/stdc++.h>
using namespace std;

long long modpow(long long base, long long exp){
  	long long result = 1;
  	while (exp > 0) {
    	if (exp & 1) result = (result * base);
    	base = (base * base);
    	exp >>= 1;
  	}
  	return result;
}

void solve(){
	long long n,temp;
	cin >> n;
	long long f = 0,s = 0;
	for(long long i = 0;i < n;i++){
		cin >> temp;
		if(temp == 0){
			f++;
		}else if(temp == 1){
			s++;
		}
	}
	long long ans = 0;
	
	ans = s*(modpow(2,f));
	cout << ans << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
