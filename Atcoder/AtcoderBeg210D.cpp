#include <bits/stdc++.h>
#define int long long
#define all(a) a.begin(),a.end()
using namespace std;
const int MOD = 1000000009;
 
int n, m, c;
const int N = 1005;
 
 
int get(vector<vector<int>> &mas) {
    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cost[i][j] = mas[i][j] - c * (i + j);
    for (int i = 0; i < n; i++)
        for (int j = 1; j < m; j++)
            cost[i][j] = min(cost[i][j], cost[i][j - 1]);
    for (int j = 0; j < m; j++)
        for (int i = 1; i < n; i++)
            cost[i][j] = min(cost[i][j], cost[i - 1][j]);
    int res = INT64_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int mi = MOD * MOD;
            if (i > 0) mi = min(mi, cost[i - 1][j]);
            if (j > 0) mi = min(mi, cost[i][j - 1]);
            res = min(res, mi + mas[i][j] + (i + j) * c);
            cout << cost[i][j] << " ";
        }
        cout << endl;
    }
    return res;
}


 
void solve() {
    cin >> n >> m >> c;
    vector<vector<int>> mas(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mas[i][j];
    int res = get(mas);
    reverse(all(mas));
    res = min(res, get(mas));
    cout << res;
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
//    freopen("input.txt", "r", stdin);s
    int tt = 1;
    //cin >> tt;
    while (tt--)
        solve();
}
