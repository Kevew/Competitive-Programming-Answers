#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> check;
int n;

void solve(int x){
	if(x < 3){
		return;
	}
	int y = ceil(sqrt(x));
	for(int i = x-1;i > y;i--){
		check.push_back(make_pair(i,x));
	}
	check.push_back(make_pair(x,y));
	check.push_back(make_pair(x,y));
	solve(y);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check.clear();
		cin >> n;
		solve(n);
		cout << check.size() << endl;
		for(int i = 0;i < check.size();i++){
			cout << check[i].first << " " << check[i].second << endl;
		}
	}
}
