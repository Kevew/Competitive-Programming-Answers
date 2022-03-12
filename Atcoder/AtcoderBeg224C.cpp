#include <bits/stdc++.h>
using namespace std;

pair<long double,long double> arr[310];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr,arr+n);
	long long ans = (n*(n-1)*(n-2))/6;
	for(long long i = 0;i < n;i++){
		for(long long j = i+1;j < n;j++){
			for(long long k = j+1;k < n;k++){
				if((arr[i].second-arr[j].second)*(arr[i].first-arr[k].first) == (arr[i].second-arr[k].second)*(arr[i].first-arr[j].first)){
					ans--;
				}
			}
		}
	}
	cout << ans << endl;
}
