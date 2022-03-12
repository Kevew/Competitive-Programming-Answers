#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    
    vector<int> a(m);
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < m - 1; j++){
            if (s[i + 1][j] == 'X' && s[i][j + 1] == 'X') {
                a[j + 1]++;
            }
        }
    }
    for(int j = 1; j < m; j++){
        a[j] += a[j - 1];
    }
    
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << (a[l] == a[r] ? "YES" : "NO") << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
