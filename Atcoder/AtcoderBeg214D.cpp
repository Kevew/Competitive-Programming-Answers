#include <bits/stdc++.h>
using namespace std;
const int N = 1e6; 
 
int n;
int sub[N]; 
long long now; 
long long ans; 
 
struct dsu{
    int fat[N];
    int sub[N];
    dsu(){
        iota(fat, fat + N, 0);
        fill(sub, sub + N, 1);
    }
    void link(int u, int v){
        u = find(u), v = find(v);
        if (u != v){
            ans += 1ll * now * sub[u] * sub[v];
            fat[u] = v;
            sub[v] += sub[u];
            sub[u] = 0;
        }
    //	fat[u] = v;
    }
    int find(int x) { return fat[x] = (x == fat[x] ? x : find(fat[x])); }
}d1;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector< array<int, 3> > arr ; 
    for(int i = 0 ;i < n  - 1; ++ i){
    	int u , v, w ; cin >> u >> v >> w ; 
        arr.push_back({w , u, v}) ; 
    }
    sort(arr.begin(),arr.end()); 
 
    for(int i = 0 ;i < n -1 ; ++ i){
        now = arr[i][0] ; 
        d1.link(arr[i][1], arr[i][2]) ; 
    }
    cout << ans << endl;
}
