#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

int main(){
	long long n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	map<long long,long long> prevsum;
	long long ans = 0;
	long long curr = 0;
	for(int i = 0;i < n;i++){
		curr += arr[i];
		if(curr == m){
			ans++;
		}
		if(prevsum.find(curr-m) != prevsum.end()){
			ans += prevsum[curr-m];
		}
		prevsum[curr]++;
	}
	cout << ans << endl;
}
