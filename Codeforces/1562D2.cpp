#include <bits/stdc++.h>
using namespace std;

int sum[300010];
int n;

int get(int l, int r, vector<int> p[]){
    int x = sum[l]+sum[r]+2*n;
    auto it = lower_bound(p[x].begin(), p[x].end(), l);
    return *it;
}

void solve() {
    int q;
    cin >> n >> q;
    string s;
    cin >> s;
    sum[0] = 0;
    for(int i = 0;i < n;i++){
        sum[i+1] = sum[i]+(s[i]=='+'?1:-1)*(i%2==0?1:-1);
    }
    
    vector<int> p[4*n+1];
    for(int i = 0;i < n;i++){
        p[sum[i]+sum[i+1]+2*n].push_back(i);
    }
    
    for(int i = 0;i < q;i++){
        int l, r;
        cin >> l >> r;
        l--;
        if((r - l) % 2 == 1){
            cout << "1" << endl;
            cout << get(l,r,p) + 1 << endl;
        }else if(sum[l] == sum[r]){
            cout << "0" << endl;
        }else{
            cout << "2" << endl;	
            cout << l + 1 << " " << get(l + 1,r,p) + 1 << endl;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; 
    while(t--){
    	solve();
    }
}
