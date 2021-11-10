#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> arr[510];

map<pair<long long,long long>, bool> check;

int main(){
	long long n;
	cin >> n;
	long long a,b;
	for(long long i = 0;i < n;i++){
		cin >> a >> b;
		arr[i] = make_pair(a,b);
	}
	
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j < n;j++){
			if(i == j){
				continue;
			}
			long long a = arr[i].first-arr[j].first;
			long long b = arr[i].second-arr[j].second;
			if(b == 0 && a != 0){
				a = a/abs(a);
			}else if(b != 0 && a == 0){
				b = b/abs(b);
			}else{
				long long t = abs(__gcd(a,b));
				a /= t;
				b /= t;
			}
			if(!check[{a,b}]){
				ans++;
				check[{a,b}] = true;
			}
		}
	}
	cout << ans << endl;
}
