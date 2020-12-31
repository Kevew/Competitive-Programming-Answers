#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
	if(p1.second > p2.second){
		return true;
	}else if(p1.second == p2.second){
		if(p1.first <= p2.first){
			return true;
		}else{
			return false;
		}
	}
	return false;
}

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> lowest(n,1);
	vector<pair<int,int>> scores;
	for(int i = 0;i < n;i++){
		scores.push_back({i,0});
	}
	int temp;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cin >> temp;
			scores[j].second += temp;
		}
		vector<pair<int,int>> test = scores;
		sort(test.begin(),test.end(),compare);
		int pair = 0;
		for(int j = 0;j < n;j++){
			if(j > 0){
				if(test[j].second == test[j-1].second){
					pair++;
				}else{
					pair = 0;
				}
			}
			lowest[test[j].first] = max(lowest[test[j].first],j+1-pair);
		}
	}
	sort(scores.begin(),scores.end(),compare);
	int i = 0;
	while(true){
		cout << "Yodeller " << scores[i].first+1 << " is the TopYodeller: score " << scores[i].second << ", worst rank " << lowest[scores[i].first] << endl;
		i++;
		if(scores[i].second != scores[i-1].second){
			break;
		}
	}
}
