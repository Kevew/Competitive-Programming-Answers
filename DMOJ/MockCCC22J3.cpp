#include <bits/stdc++.h>
using namespace std;

map<char,long long> check;

int main(){
	long long n,m;
	cin >> n >> m;
	string a,b;
	cin >> a >> b;
	long long maximum = 0;
	for(long long i = 0;i < n;i++){
		check[a[i]]++;
		maximum = max(maximum,check[a[i]]);
	}
	
	long long ans = 0;
	for(long long i = 0;i < m;i++){
		ans += check[b[i]];
	}
	long long diff = 0;
	for(long long i = 0;i < m;i++){
		diff = max(diff,maximum-check[b[i]]);
	}
	ans += diff;
	cout << ans << endl;
}
