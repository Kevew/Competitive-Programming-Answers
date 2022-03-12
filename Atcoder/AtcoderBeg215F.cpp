#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	for(long long i = 0;i < n;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr.begin(),arr.end());
	long long l = 0,r = 1000000001;
	while(r-l > 1){
		long long mid = (r+l)/2;
		queue<pair<long long,long long>> q;
		long long mi = 1000000001,ma = 0;
		bool change = false;
		for(auto i: arr){
			while(!q.empty()){
				if(q.front().first > i.first-mid){
					break;
				}
				mi = min(mi,q.front().second);
				ma = max(ma,q.front().second);
				q.pop();
			}
			if(mi <= i.second-mid || ma >= i.second+mid){
				change = true;
				break;
			}
			q.push(i);
		}
		if(change){
			l = mid;
		}else{
			r = mid;
		}
	}
	cout << l << endl;
}
