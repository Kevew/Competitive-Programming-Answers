#include <bits/stdc++.h>
using namespace std;

pair<int,int> black[200010];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> black[i].first >> black[i].second;
	}
	sort(black,black+m);
	set<int> success;
	success.insert(n);
	for(int i = 0;i < m;){
		int curr = black[i].first;
		vector<int> removenew;
		vector<int> addnew;
		while(i < m && curr == black[i].first){
			int a = success.count(black[i].second-1);
			int b = success.count(black[i].second+1);
			if(a+b == 0){
				removenew.push_back(black[i].second);
			}else{
				addnew.push_back(black[i].second);
			}
			i++;
		}
		for(auto j: removenew){
			success.erase(j);
		}
		for(auto j: addnew){
			success.insert(j);
		}
	}
	cout << success.size() << endl;
}
