#include <bits/stdc++.h>
using namespace std;

char arr[501][501];
long long dis[501][501];

long long n,m;

pair<long long,long long> nDir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j < m;j++){
			cin >> arr[i][j];
			dis[i][j] = 1e9;
		}
	}
	
	deque<pair<long long,long long>> que;
	dis[0][0] = 0;
	que.push_back(make_pair(0,0));
	while(!que.empty()){
		pair<long long,long long> curr = que.front();
		long long x = curr.first;
		long long y = curr.second;
		que.pop_front();
		for(long long i = 0;i < 4;i++){
			long long xx = x + nDir[i].first;
			long long yy = y + nDir[i].second;
			if(xx >= 0 && xx < n && yy >= 0 && yy < m){
				if(dis[x][y] < dis[xx][yy] && arr[xx][yy] == '.'){
					dis[xx][yy] = dis[x][y];
					que.push_front(make_pair(xx,yy));
				}
			}
		}
		for(long long i = x - 2;i <= x+2;i++){
			for(long long j = y - 2;j <= y+2;j++){
				if((i == x-2 || i == x+2) && (j == y-2 || j == y+2)){
					continue;
				}
				if(i >= 0 && i < n && j >= 0 && j < m){
					if(dis[x][y] + 1 < dis[i][j] && arr[i][j] == '#'){
						dis[i][j] = dis[x][y] + 1;
						que.push_back(make_pair(i,j));
					}
				}
			}
		}
		
	}
	cout << dis[n-1][m-1] << endl;
}
