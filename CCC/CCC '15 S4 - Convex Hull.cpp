#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> p;

struct edge{
	int v, w, h;
	friend bool operator<(const edge &a, const edge &b){
		return a.w > b.w;
	}
};

const int MAX = 2001,
		KMAX = 201;

int n, m, k, a, b, ba, bb, bt, bh, dist[MAX][KMAX];

vector<edge> matrix[MAX];
priority_queue<edge> nextt;

const int INF = 0x3f3f3f3f, INFB = 0x3f;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> k >> n >> m;

	for(int i = 0;i < m;i++){
		cin >> ba >> bb >> bt >> bh;
		matrix[ba].push_back({bb, bt, bh});
		matrix[bb].push_back({ba, bt, bh});
	}

	cin >> a >> b;


	memset(dist, INFB, sizeof(dist));
	dist[a][0] = 0;
	nextt.push({a, 0, 0});

	while(!nextt.empty()){
		edge curr = nextt.top();
		nextt.pop();

		if(curr.v == b){
			break;
		}
		for(edge adj:matrix[curr.v]){
			int alt = curr.w + adj.w, alth = curr.h + adj.h;
			if(alth < k && alt < dist[adj.v][alth]){
				dist[adj.v][alth] = alt;
				nextt.push({adj.v, alt, alth});
			}
		}
	}

	int mindist = *min_element(dist[b], dist[b] + 201);

	if(mindist == INF){
		printf("-1\n");
	}else{
		printf("%d\n", mindist);
	}
}
