#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> sensors;

bool compare(pair<int,int> a,pair<int,int> b){
	if(a.second > b.second){
		return true;
	}else if(a.second == b.second){
		if(a.first < b.first){
			return true;
		}
	}
	return false;
}

int main(){
	int N;
	cin >> N;
	int temp;
	for(int i = 0;i <= 1000;i++){
		sensors.push_back({i,0});
	}
	for(int i = 0;i < N;i++){
		cin >> temp;
		sensors[temp].second++;
	}
	
	sort(sensors.begin(),sensors.end(),compare);
	if(sensors[0].second == sensors[1].second){
		int i = 0;
		while(sensors[0].second == sensors[i].second && i <= 1000){
			i++;
		}
		cout << abs(sensors[0].first-sensors[i-1].first) << endl;
	}else if(sensors[0].second != sensors[1].second && sensors[1].second == sensors[2].second){
		int i = 1;
		int ans = 0;
		while(sensors[1].second == sensors[i].second && i <= 1000){
			ans = max(ans,abs(sensors[0].first-sensors[i].first));
			i++;
		}
		cout << ans << endl;
	}else{
		cout << abs(sensors[0].first-sensors[1].first);
	}
}
