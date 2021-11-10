#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

vector<tuple<int,long long,long long>> edge[200010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	x--,y--;
	for(int i = 0;i < m;i++){
        int a,b;
		long long t,k;
        cin >> a >> b >> t >> k;
        a--;
        b--;
        edge[a].emplace_back(b, t, k);
        edge[b].emplace_back(a, t, k);
	}
	
	
	vector<long long> dist(200010, INF);
    priority_queue<pair<long long, long long>,vector<pair<long long, long long>>,greater<pair<long long, long long>>> queue;
    queue.push({0, x});
 
    while(!queue.empty()){
    	pair<long long,int> temp = queue.top();
    	long long d = temp.first;
    	int t = temp.second;
        queue.pop();
        if(d > dist[t]) continue;
        dist[t] = d;
        for(auto a : edge[t]){
        	long long b = get<0>(a);
            long long c = get<1>(a);
            long long e = get<2>(a);
            if(d%e != 0){
            	c += ((d+e-1)/e)*e-d;
			}
            if(min(dist[b], d + c)){
                queue.push({d+c,b});
            }
        }
    }
    if(dist[y] != INF){
    	cout << dist[y] << endl;
	}else{
		cout << "-1" << endl;
	}
}
