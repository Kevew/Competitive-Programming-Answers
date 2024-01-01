#include <bits/stdc++.h>
using namespace std;

bool compare(pair<long long,pair<long long,long long>> a, pair<long long,pair<long long,long long>> b){
	if(a.first > b.first){
		return true;
	}else if(a.first < b.first){
		return false;
	}else{
		if(a.second.first < b.second.first){
			return true;
		}else if(a.second.first > b.second.first){
			return false;
		}else{
			if(a.second.second < b.second.second){
				return true;
			}else{
				return false;
			}
		}
	}
}

void solve(){
	long long n,m,h;
	cin >> n >> m >> h;
	vector<pair<long long,pair<long long,long long>>> arr;
	for(long long i = 0;i < n;i++){
		vector<long long> temp;
		for(long long j = 0;j < m;j++){
			long long a;
			cin >> a;
			temp.push_back(a);
		}
		sort(temp.begin(),temp.end());
		long long penalty = 0;
		long long currTime = 0;
		long long cnt = 0;
		long long points = 0;
		for(long long j = 0;j < m;j++){
			if(currTime + temp[j] <= h){
				currTime += temp[j];
				cnt += temp[j];
				penalty += cnt;
				points++;
			}
		}
		arr.push_back({points,{penalty, i}});
	}
	sort(arr.begin(),arr.end(),compare);
	
	for(long long i = 0;i < n;i++){
		if(arr[i].second.second == 0){
			cout << i+1 << endl;
			return;
		}
	}
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
