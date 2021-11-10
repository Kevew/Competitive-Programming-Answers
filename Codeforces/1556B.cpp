#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int> p;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] %= 2;
        if(a[i] == 1){
            p.push_back(i);
        }
    }
    
    long long res = 1E18;
    for(int c = 0;c < 2;c++) {
        if(p.size() != (n+1-c)/2){
            continue;
        }
        long long v = 0;
        for(int i = 0;i < p.size();i++){
            v += abs(p[i] - (2 * i + c));
        }
        res = min(res, v);
    }
    
    if(res == 1E18){
        res = -1;
    }
    cout << res << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
