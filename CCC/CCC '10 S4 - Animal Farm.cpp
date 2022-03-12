#include <bits/stdc++.h>
using namespace std;

#define Cmplt(type) bool operator<(const type &o) const
#define rep(i, a, b) for (__typeof(a) i = a; i < b; i++)
#define reprev(i, a, b) for (__typeof(a) i = a; i > b; i--)
#define repi(a, b) rep(i, a, b)
#define repj(a, b) rep(j, a, b)
#define repk(a, b) rep(k, a, b)
#define pb push_back
template <typename F> inline void println(F t){cout<<t<<'\n';}
#define all(x) (x).begin(), (x).end()

struct Ed {
    int a, b, w;
    Cmplt(Ed) { return w < o.w; }
};

const int MN = 101, MM = 11, MX = 1001;
int N,n[MN], id[MN][MM], weight[MN][MM];
vector<Ed> edges;

int dsu[MN];
void init() { iota(dsu, dsu + MN, 0); }
int rt(int x) { return x == dsu[x] ? x : dsu[x] = rt(dsu[x]); }
void unite(int x, int y) { dsu[rt(x)] = rt(y); }

int cnt[MX][MX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   	cin >> N;
    repi(0, N) {
        cin >> n[i];
        repj(0, n[i])
            cin >> id[i][j];
        repj(0, n[i])
            cin >> weight[i][j];
    }
    repi(0, N) {
        repj(i + 1, N) {
            repk(0, n[i]) {
                rep(l, 0, n[j]) {
                    int start1 = id[i][k], start2 = id[j][l], end1 = id[i][(k + 1) % n[i]], end2 = id[j][(l + 1) % n[j]];
                    if ((start1 == start2 && end1 == end2) || (start1 == end2 && start2 == end1)) {
                        edges.pb({i, j, weight[i][k]});
                    }
                }
            }
        }

        repk(0, n[i]) {
            cnt[id[i][k]][id[i][(k + 1) % n[i]]]++;
            cnt[id[i][(k + 1) % n[i]]][id[i][k]]++;
        }
    }

    init();
    for (auto e : edges)
        unite(e.a, e.b);
    unordered_set<int> cc;
    repi(0, N)
        cc.insert(rt(i));
    
    if (int(cc.size()) > 1) {
        repi(0, N) {
            repj(0, n[i]) {
                int st = id[i][j], en = id[i][(j + 1) % n[i]];
                if (cnt[st][en] == 1)
                    edges.pb({i, N, weight[i][j]});
            }
        }
    }
    sort(all(edges));
    init();
    int tot = 0;
    for(auto e : edges){
        if (rt(e.a) != rt(e.b)) {
            tot += e.w;
            unite(e.a, e.b);
        }
    }
    println(tot);

    return 0;
}
