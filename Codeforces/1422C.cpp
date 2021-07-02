#include <bits/stdc++.h>
using namespace std;

long mod = 1e9+7;

long long add(long long a, long long b){
	return ((a+b)%mod+mod)%mod;
}

long long mul(long long a, long long b) {
	return ((a*b)%mod+mod)%mod;
}

long long nC2(long long a){
	return add(a*(a+1)/2, 0);
}

long long main(){
	string n;
	cin >> n;
	long long nsize = n.size();
	long long values[nsize];
	for(long long i = 0;i < nsize;i++){
		values[i] = n[nsize-1-i]-'0';
	}
	long long ans = 0;
	long long tenVal = 0,tenPow = 1,multiple = 1;
	long long biggerNums = nsize-1;
	for(long long i = 0;i < nsize;i++){
		ans = add(ans, mul(values[i], mul(nC2(biggerNums),tenPow)));
		ans = add(ans, mul(values[i], tenVal));
		tenVal = add(tenVal, mul(tenPow, multiple));
		multiple = add(multiple,1);
		tenPow = mul(tenPow,10);
		biggerNums--;
	}
	cout << ans << endl;
}
