#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

vector<int> paths[200010];
int visited[200010];
int n;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> n >> m;
	int a,b;
	for(int i = 0;i <= n;i++){
		visited[i] = 1e9;
	}
	for(int i = 0;i < m;i++){
		cin >> a >> b;
		paths[a].push_back(b);
		paths[b].push_back(a);
	}
	queue<pair<int,pair<int,int>>> curr;
	curr.push({1,{1,1}});
	int ans = 0;
	while(!curr.empty()){
		map<int,int> newqueue;
		int time = curr.size();
		int newtime = curr.front().second.first+1;
		while(time > 0){
			pair<int,pair<int,int>> temp = curr.front();
			curr.pop();
			if(visited[temp.first] == temp.second.first){
				newqueue[temp.first] = (newqueue[temp.first]+temp.second.second)%MOD;
			}else if(visited[temp.first] > temp.second.first){
				visited[temp.first] = temp.second.first;
				newqueue[temp.first] = (temp.second.second)%MOD;
			}
			time--;
		}
		bool end = false;
		for(auto i: newqueue){
			if(i.first == n){
				ans = i.second;
				end = true;
				break;
			}
			for(auto j: paths[i.first]){
				curr.push({j,{newtime,i.second}});
			}
		}
		if(end){
			break;
		}
	}
	cout << ans << endl;
}
