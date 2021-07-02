#include <bits/stdc++.h>
using namespace std;


long long x[5000010],y[5000010];
long long a[200010];

long long main(){
	long long n;
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> a[i];
	}
	
	long long temp;
	for(long long i = 1;i <= n;i++){
		for(long long j = i+1;j <= n;j++){
			temp = a[i]+a[j];
			if(x[temp] && i != x[temp] && i != y[temp] && j != x[temp] && j != y[temp]){
				cout << "YES\n" << i << " " << j << ' ' << x[temp] << ' ' << y[temp] << endl;
				return 0;
			}
			x[temp] = i,y[temp] = j;
		}
	}
	cout << "NO" << endl;
	
}
