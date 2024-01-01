#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	vector<pair<long long,long long>> arr;
	long long cons = 0;
	for(long long i = 0;i < n;i++){
		long long a,b;
		cin >> a >> b;
		arr.push_back({a,b});
		cons += b;
	}
	sort(arr.begin(),arr.end());
	long long j = 1;
	for(long long i = 0;i < n;i++){
		if(cons <= m){
			break;
		}
		j = arr[i].first+1;
		cons -= arr[i].second;
	}
	if(cons > m){
		j = arr[n-1].first+1;
	}
	cout << j << endl;
	
}
