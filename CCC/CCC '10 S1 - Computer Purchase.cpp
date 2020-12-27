#include <bits/stdc++.h>
using namespace std;

vector<pair<string,int>> scores;

bool compare(pair<string,int> a, pair<string,int> b){
	if(a.second > b.second){
		return true;
	}else if(a.second == b.second){
		if(a.first < b.first){
			return true;
		}else{
			return false;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	string a;
	int R,S,D;
	while(t--){
		cin >> a >> R >> S >> D;
		scores.push_back({a,(R*2)+(S*3)+D});
	}
	if(scores.size() == 0){
		return 0;
	}
	if(scores.size() == 1){
		cout << scores[0].first << endl;
		return 0;
	}
	sort(scores.begin(),scores.end(),compare);
	cout << scores[0].first << endl << scores[1].first << endl;
}
