#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        int b;
        cin >> b;
        a[i] = b - a[i];
    }
    
    long long s[n + 1];
    s[0] = 0;
    for(int i = 0;i < n;i++){
        s[i+1] = s[i]+a[i];
    }
    
    long long mx[n][20],mn[n][20];
    for(int i = 0;i < n;i++){
        mx[i][0] = mn[i][0] = s[i];
    }
    
    for(int j = 0;(1<<(j+1)) <= n;j++){
        for(int i = 0;i+(1<<(j+1)) <= n;i++){
            mx[i][j + 1] = max(mx[i][j],mx[i+(1<<j)][j]);
            mn[i][j + 1] = min(mn[i][j],mn[i+(1<<j)][j]);
        }
    }
    
    auto queryMax = [&](int l, int r){
        int k = __lg(r - l);
        return max(mx[l][k], mx[r - (1 << k)][k]);
    };
    auto queryMin = [&](int l, int r){
        int k = __lg(r - l);
        return min(mn[l][k], mn[r - (1 << k)][k]);
    };
    
    while(q--){
        int l,r;
        cin >> l >> r;
        l--;
        if(s[l] != s[r] || queryMin(l, r) < s[l]){
            cout << "-1" << endl;
        }else{
            cout << queryMax(l, r) - s[l] << endl;
        }
    }
}

