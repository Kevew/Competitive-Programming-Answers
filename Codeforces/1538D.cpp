#include <bits/stdc++.h>
using namespace std;

int primeFactor(int a){
	int ans = 0;
	while(a%2==0){
		ans++;
		a /= 2;
	}
	for(int i = 3;i <= sqrt(a);i+=2){
		while(a%i == 0){
			ans++;
			a/=i;
		}
	}
	if(a > 2){
		ans++;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,k;
		cin >> a >> b >> k;
		int f = primeFactor(a);
		int s = primeFactor(b);
		int lowest;
		if(a == b){
			lowest = 0;
		}else if(a%b == 0 || b%a == 0){
			lowest = 1;
		}else{
			lowest = 2;
		}
		if(lowest <= k && k <= f+s && (a!=b||k!=1)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
