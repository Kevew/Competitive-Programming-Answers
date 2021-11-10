#include <bits/stdc++.h>
using namespace std;

int a[1000010],p[1000010];

int get_sum(int l, int r){
    if (l > r) {
        return 0;
    }
    return (l % 2 == 1) ? p[r] - p[l - 1] : p[l - 1] - p[r];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        string ss;
        cin >> ss;
        for(int i = 1;i <= n;i++){
            a[i] = (ss[i-1]=='+'? 1 : -1);
        }
        p[0] = 0;
        for(int i = 1;i <= n;i++){
            p[i] = p[i - 1] + (i%2==1? a[i] : -a[i]);
        }
        for(int i = 0;i < q;i++){
            int l, r;
            cin >> l >> r;
            if (get_sum(l, r) == 0){
                cout << "0" << endl;
                continue;
            }
            if((r-l+1)%2 == 0){
                cout << "2" << endl;
            }else{
                cout << "1" << endl;
            }
        }
    }
}
