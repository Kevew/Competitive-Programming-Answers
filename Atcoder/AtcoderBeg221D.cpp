#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> arr[200010];

long long ans[200010];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	multiset<long long> past;
	sort(arr,arr+n);
	long long prev = -1;
	long long curr = 0;
	for(long long i = 0;i < n;i++){
		while(past.size() > 0 && *past.begin() < arr[i].first){
			ans[past.size()] += *past.begin()-prev+1;
			prev = *past.begin()+1;
			past.erase(past.begin());
		}
		ans[past.size()] += arr[i].first-prev;
		past.insert(arr[i].first+arr[i].second-1);
		prev = arr[i].first;
	}
	while(past.size() > 0){
		ans[past.size()] += *past.begin()-prev+1;
		prev = *past.begin()+1;
		past.erase(past.begin());
	}
	for(long long i = 0;i < n;i++){
		cout << ans[i+1] << " ";
	}
}
