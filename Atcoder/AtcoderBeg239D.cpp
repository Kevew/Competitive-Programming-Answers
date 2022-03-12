#include <bits/stdc++.h>
using namespace std;

bitset<100010> primes;

void sieve(int n){
	primes[0] = primes[1] = true;
	for(int i = 2;i*i <= n;i++){
		if(!primes[i]){
			for(int j = i*i;j <= n;j += i){
				primes[j] = true;
			}
		}
	}
}

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	sieve(b+d+10000);
	
	int ans = 0;
	for(int i = a;i <= b;i++){
		bool check = true;
		for(int j = c;j <= d;j++){
			if(!primes[i+j]){
				check = false;
				break;
			}
		}
		if(check){
			ans++;
			break;
		}
	}
	if(ans > 0){
		cout << "Takahashi" << endl;
	}else{
		cout << "Aoki" << endl;
	}
}
