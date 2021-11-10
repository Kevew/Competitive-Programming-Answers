#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
pair<long long, long long> a[N];
long long dp[N];

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + n + 1);
    for(int i = n; i >= 1; i--){
        long long sum = 0;
        dp[i] = LLONG_MAX;
        for(int j = i; j <= n; j++){
            sum += a[j].first - a[i].first;
            dp[i] = min(dp[i], sum + dp[j + 1] + a[i].second);
        }
    }
    cout << dp[1] << endl;
}

