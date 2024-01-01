#include <bits/stdc++.h>
using namespace std;

map<long long, vector<long long>> arr;
map<long long, long long> maximum;

int main(){
	maximum.clear();
	arr.clear();
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		long long a,b;
		cin >> a >> b;
		arr[a].push_back(b);
		maximum[a] = max(maximum[a], b);
	}
	vector<long long> sorted;
	for(auto i: maximum){
		sorted.push_back(i.second);
	}
	sort(sorted.begin(),sorted.end());
	long long ans = 0;
	if(sorted.size() > 1){
		ans = sorted[sorted.size()-1] + sorted[sorted.size()-2];
	}
	for(auto i: arr){
		if(i.second.size() > 1){
			sort(i.second.begin(),i.second.end());
			ans = max(ans, i.second[i.second.size()-1] + i.second[i.second.size()-2]/2);
		}
	}
	cout << ans << endl;
}
