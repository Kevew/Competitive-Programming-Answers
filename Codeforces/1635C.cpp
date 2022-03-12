
#include<iostream>
#include<vector>
using namespace std;
const long long mod = 1e9+7;
long long a[200009], v2[50];
long long pow(long long b, long long x){
	if (x==0) return 1;
	long long t = pow(b, x/2);
	return t*t%mod*(x%2?b:1)%mod;
}
int main(){
	long long n;
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) {
		int vpi=0;
		while(a[i]%2==0){
			vpi++;
			a[i]/=2;
		}
		v2[vpi]++;
	}
	int ans = pow(2, n) - pow(2, n-v2[0]) + mod;
	for (int i=1;i<49;i++){
		long long k = n;
		for (int j=0;j<=i;j++) k -= v2[j];
		if (v2[i]>1) ans += pow(2, k)*(pow(2, v2[i]-1)-1)%mod;
		ans %= mod;
	}
	cout << ans << endl;
	
}

