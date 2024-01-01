#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir;

bool ifSquared(int x){
	int sqr = sqrt(x);
	if(sqr*sqr == x){
		return true;
	}else{
		return false;
	}
}

int fastest[410][410];
int n,m;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0;i <= 400;i++){
		for(int j = 0;j <= 400;j++){
			fastest[i][j] = 999999;
		}
	}
	cin >> n >> m;
	for(int i = 0;i <= 1000;i++){
		int a = m-(i*i);
		if(ifSquared(a)){
			dir.push_back({i,sqrt(a)});
		}
	}
	
	queue<pair<int,pair<int,int>>> que;
	que.push({0,{0,0}});
	while(!que.empty()){
		pair<int,pair<int,int>> curr = que.front();
		que.pop();
		int time = curr.first;
		int x = curr.second.first;
		int y = curr.second.second;
		if(fastest[x][y] > time){
			fastest[x][y] = time;
			time++;
			for(auto i: dir){
				if(x+i.first >= 0 && x+i.first < n && y+i.second >= 0 && y+i.second < n){
					que.push({time,{x+i.first,y+i.second}});
				}
				if(x+(0-i.first) >= 0 && x+(0-i.first) < n && y+i.second >= 0 && y+i.second < n){
					que.push({time,{x+(0-i.first),y+i.second}});
				}
				if(x+(0-i.first) >= 0 && x+(0-i.first) < n && y+(0-i.second) >= 0 && y+(0-i.second) < n){
					que.push({time,{x+(0-i.first),y+(0-i.second)}});
				}
				if(x+i.first >= 0 && x+i.first < n && y+(0-i.second) >= 0 && y+(0-i.second) < n){
					que.push({time,{x+i.first,y+(0-i.second)}});
				}
			}
		}
	}	
	
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(fastest[i][j] == 999999){
				cout << "-1 ";
			}else{
				cout << fastest[i][j] << " ";
			}
		}
		cout << endl;
	}
}
