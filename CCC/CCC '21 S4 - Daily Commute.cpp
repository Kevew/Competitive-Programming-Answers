#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 0x3f3f3f3f, LLINF = 0x3f3f3f3f3f3f3f3f;

const int MN = 2e5 + 1;
int N, M, Q,P[MN];
vector<int> g[MN];

queue<int> q;
int dis[MN];

multiset<int> candidate;
void change(int loc, int time, bool add) {
    int v = time + dis[loc];
    if (add) candidate.insert(v);
    else candidate.erase(candidate.find(v));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M >> Q;
    for(auto i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        g[b].push_back(a);
    }

    memset(dis, 999999, sizeof dis);
    dis[N] = 0; q.push(N);
    while(!q.empty()){
        int c = q.front(),alt = dis[c] + 1;
        q.pop();
        for(auto to:g[c]){
            if(alt < dis[to]){
                dis[to] = alt;
                q.push(to);
            }
        }
    }

    for (int i = 1;i <= N;i++){
        cin >> P[i];
        change(P[i], i-1, true);
    }

    while(Q--){
        int x, y;
		cin >> x >> y;
        change(P[x], x-1, false);
        change(P[y], y-1, false);
        swap(P[x], P[y]);
        change(P[x], x-1, true);
        change(P[y], y-1, true);
        cout << *candidate.begin() << '\n';
    }

    return 0;
}
