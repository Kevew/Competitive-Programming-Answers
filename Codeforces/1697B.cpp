#include <bits/stdc++.h>
using namespace std;

long long a[1000010];
long long prefix[1000010];

int main(){
	long long n,q;
	cin >> n >> q;
	for(long long i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(long long i = 0;i < n;i++){
		prefix[i+1] = prefix[i]+a[i];
	}
	
	
	while(q--){
		long long a,b;
		cin >> a >> b;
		long long rem = abs(prefix[n-a]-prefix[n-a+b]);
		cout << rem << endl;
	}
}
