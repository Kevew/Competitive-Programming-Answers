#include <bits/stdc++.h>
using namespace std;

long long arr[300010];
map<long long,long long> cnt;

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	
	long long ans = n*(n-1)/2;
	for(auto i: cnt){
		if(i.second > 1){
			ans -= i.second*(i.second-1)/2;
		}
	}
	cout << ans << endl;
}
