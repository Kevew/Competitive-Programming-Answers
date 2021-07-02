#include <bits/stdc++.h>
using namespace std;

int n,t;
int ans = 2e9;
vector<pair<int,int>> routes[5010];
int fastest[5010];

int pencilcity[5010];

void check(int t){
	queue<pair<int,int>> curr;
	curr.push(make_pair(t,0));
	pair<int,int> temp;
	while(!curr.empty()){
		temp = curr.front();
		curr.pop();
		if(fastest[temp.first] > temp.second && temp.second <= ans){
			fastest[temp.first] = temp.second;
			if(pencilcity[temp.first] != -1){
				ans = min(ans,temp.second + pencilcity[temp.first]);
			}
			for(int i = 0;i < routes[temp.first].size();i++){
				curr.push({routes[temp.first][i].first,temp.second + routes[temp.first][i].second});
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0;i <= 5000;i++){
		fastest[i] = 1e9;
		pencilcity[i] = -1;
	}
	cin >> n >> t;
	int a,b,c;
	for(int i = 0;i < t;i++){
		cin >> a >> b >> c;
		routes[a].push_back(make_pair(b,c));
		routes[b].push_back(make_pair(a,c));
	}
	cin >> c;
	for(int i = 0;i < c;i++){
		cin >> a >> b;
		pencilcity[a] = b;
	}
	cin >> c;
	check(c);
	cout << ans << endl;
}


