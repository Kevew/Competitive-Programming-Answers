#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;

int n;
const int maxN = 2e5 + 10;
int a[maxN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tst;
    cin >> tst;
    while (tst--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        set<int> s;
        s.insert(a[1]);
        bool ok = true;
        for (int i = 2; i <= n; i++) {
            int prv = a[i - 1];
            if (prv != a[i]) {
                if (prv < a[i]){
                    auto it = s.upper_bound(prv);
                    if (it != s.end() && (*it < a[i])) {
                        ok = false;
                        break;
                    }
                }
                if (prv > a[i]) {
                    auto it = s.lower_bound(prv);
                    if (it != s.begin() && (*(--it) > a[i])) {
                        ok = false;
                        break;
                    }
                }
            }
            s.insert(a[i]);
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
