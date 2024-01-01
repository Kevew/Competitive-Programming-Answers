#include <bits/stdc++.h>
using namespace std;

bool vis[2010];

long long parent[2010];

void set_root(long long a){
	parent[a] = a;
}

long long find_root(long long a){
	if(parent[a] == a){
		return a;
	}
	return parent[a] = find_root(parent[a]);
}

void make_pair(long long a,long long b){
	long long x = find_root(a);
	long long y = find_root(b);
	parent[x] = y;
}

int main(){
	vector<pair<long long,pair<long long,long long>>> roads;
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i <= n;i++){
		set_root(i);
	}
	for(long long i = 0;i < m;i++){
		long long a,b,c,d;
		cin >> a >> b >> c >> d;
		roads.push_back({d,{a,b}});
	}
	sort(roads.begin(),roads.end());
	long long cnt = 0;
	for(long long i = 0;i < roads.size();i++){
		long long a = roads[i].second.first;
		long long b = roads[i].second.second;
		if(find_root(a) != find_root(b)){
			make_pair(a,b);
			cnt += roads[i].first;
		}
	}
	cout << cnt << endl;
}


/*
5 7
1 2 1 100
2 4 1 9
5 2 1 6
4 5 1 100
4 3 1 100
1 3 1 7
1 4 1 1
*/
