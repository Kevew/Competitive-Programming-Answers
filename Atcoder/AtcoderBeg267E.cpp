#include <bits/stdc++.h>
using namespace std;

long long val[200010];
long long sum[200010];
bool ignored[200010];
vector<long long> arr[200010];

int main(){
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		cin >> val[i];
	}
	
	for(long long i = 0;i < m;i++){
		long long a,b;
		cin >> a >> b;
		a--;
		b--;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	set<pair<long long,long long>> s;
	for(long long i = 0;i < n;i++){
		for(auto j: arr[i]){
			sum[i] += val[j];
		}
		s.insert({sum[i],i});
	}
	
	long long ans = 0;
	while(!s.empty()){
		long long a,b;
		a = (*s.begin()).first;
		b = (*s.begin()).second;
		s.erase(s.begin());
		if(ignored[b]){
			continue;
		}
		ans = max(ans,a);
		ignored[b] = true;
		for(auto i: arr[b]){
			sum[i] -= val[b];
			if(!ignored[i]){
				s.insert({sum[i],i});
			}
		}
	}
	cout << ans << endl;
	
}
