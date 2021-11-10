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
			for(long long x = j+1;x < n;x++){
				if(arr[i].first != arr[j].first){
					long double temp = (arr[j].second-arr[i].second)/(arr[j].first-arr[i].first);
					if(temp*(arr[x].first-arr[j].first) == (arr[x].second-arr[j].second)){
						ans--;
					}
				}else{
					if(arr[j].first == arr[x].first){
						ans--;
					}
				}
			}
		}
	}
	cout << ans << endl;
}
