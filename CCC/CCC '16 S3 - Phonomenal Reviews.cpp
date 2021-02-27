#include <bits/stdc++.h>
using namespace std;

int N,M,maxx,cnt,root;
int dist[100010];
bool pho[100010],vis[100010];
vector<int> connection[100010],path[100010];

void check1(int curr,int prev){
	if(vis[curr]) return;
    vis[curr] = 1;
    if(dist[curr] > maxx && pho[curr]){
        maxx = dist[curr];
        root = curr;
    }
    for(int i = 0;i < connection[curr].size();i++){
        int next = connection[curr][i];
        if (next == prev) continue;
        dist[next] = dist[curr] + 1;
        check1(next, curr);
        if(pho[next] || path[next].size()){
            path[curr].push_back(next);
            path[next].push_back(curr);
            ++cnt;
        }
    }
    vis[curr] = 0;
}

void check2(int curr,int prev){
	if(vis[curr]){
		return;
	}
    vis[curr] = 1;
    if(dist[curr] > maxx){
        maxx = dist[curr];
        root = curr;
    }
    for(int i = 0;i < path[curr].size();i++){
        int &next = path[curr][i];
        if (next == prev) continue;
        dist[next] = dist[curr] + 1;
        check2(next, curr);
    }
}


int main(){
	cin >> N >> M;
	for(int i = 0;i < M;i++){
		cin >> root;
		pho[root] = 1;
	}
	int x,y;
	for(int i = 1;i < N;i++){
		cin >> x >> y;
		connection[x].push_back(y);
		connection[y].push_back(x);
	}
	check1(root,-1);
	dist[root] = 0;
	maxx = 0;
	check2(root,-1);
	cout << (cnt*2 - maxx) << endl;
}
