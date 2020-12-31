#include <bits/stdc++.h>
using namespace std;

int primes[2000010];

void sieve(){
	memset(primes,1,sizeof(primes));
	for(int i = 2;i < 2000010;i+=2){
		primes[i] = 0;
	}
	primes[1] = 0;
	for(int i = 3;i*i < 2000010;i+=2){
		if(primes[i]){
			for(int j = i*i;j < 2000010;j+=i){
				primes[j] = 0;
			}
		}
	}
}

void solve(){
	int a;
	cin >> a;
	if(primes[a]){
		cout << a << " " << a << endl;
	}else{
		a *= 2;
		int ans1, ans2;
		for(int j = 0;j < (a/2)+1;j++){
			if(primes[j] && primes[a-j]){
				ans1 = j,ans2 = a-j;
				break;
			}
		}
		cout << ans1 << " " << ans2 << endl;
	}
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
