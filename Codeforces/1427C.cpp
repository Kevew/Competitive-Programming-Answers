#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
const int MAXN = 1e5 + 100;
ll t[MAXN];
ll x[MAXN], y[MAXN];
ll dp[MAXN];
ll max_ans[MAXN];
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    x[0] = 1, y[0] = 1;
 
    ll R, N;
    cin >> R >> N;
    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> x[i] >> y[i];
        dp[i] = -1e9;
        for (int j = max(i-4*R, 0LL); j < i; j++) {
            if (abs(x[i]-x[j]) + abs(y[i]-y[j]) <= t[i]-t[j])
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        
        ans = max(ans,dp[i]);
    }
    cout << ans << "\n";
}
