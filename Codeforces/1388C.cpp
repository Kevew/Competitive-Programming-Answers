#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
int p[N],h[N],a[N],g[N];
vector<int> roads[N];
bool flag = true;

void dfs(int v, int ancestor = -1){
    a[v] = p[v];
    int sum_g = 0;
    for(int to : roads[v]){
		if (to == ancestor) continue;
        dfs(to, v);
        sum_g += g[to];
        a[v] += a[to];
    }
    if((a[v]+h[v])%2 == 0){
	}else flag = false;
    g[v] = (a[v] + h[v])/2;
    if(g[v] >= 0 && g[v] <= a[v]){
	}else flag = false;
    if(sum_g <= g[v]){
	}else flag = false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	
    int t;
    cin >> t;
    while (t--) {
        int n, m;
		cin >> n >> m;
        for (int i = 0;i < n;i++){
        	cin >> p[i];
		}
        for (int i = 0;i < n;i++){
        	cin >> h[i];
		}
        for (int i = 0;i < n - 1;i++){
            int a, b;
			cin >> a >> b;
            --a, --b;
            roads[a].push_back(b);
            roads[b].push_back(a);
        }
        dfs(0);
        cout << (flag ? "YES" : "NO") << endl;
        flag = true;
        for (int i = 0; i < n; ++i){
        	roads[i].clear();
		}
    }
}
