#include <bits/stdc++.h>
using namespace std;

long long arr[410];

int main(){
	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		long long x;
		cin >> x;
		x += 200;
		for(long long j = 0;j <= 400;j++){
			if(arr[j] > 0){
				ans += arr[j] * (x-j)*(x-j);
			}
		}
		arr[x]++;
	}
	cout << ans << endl;
}
