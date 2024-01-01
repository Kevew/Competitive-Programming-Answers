#include <bits/stdc++.h>
using namespace std;

map<int,bool> check;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int a;
		cin >> a;
		check[a-1] = true;
	}
	
	vector<pair<long long,long long>> lights;
	vector<pair<long long,long long>> nonlights;
	for(int i = 0;i < n;i++){
		long long a,b;
		cin >> a >> b;
		if(check[i]){
			lights.push_back({a,b});
		}else{
			nonlights.push_back({a,b});
		}
	}
	
	double ans = 0;
	for(int i = 0;i < nonlights.size();i++){
		double curr = 1e9;
		for(int j = 0;j < lights.size();j++){
			double dist = abs(lights[j].first-nonlights[i].first) * abs(lights[j].first-nonlights[i].first) + abs(lights[j].second-nonlights[i].second) * abs(lights[j].second-nonlights[i].second);
			dist = sqrt(dist);
			curr = min(dist,curr);
		}
		ans = max(curr,ans);
	}
	cout << fixed << setprecision(10);
	cout << ans << endl;
}
