#include <bits/stdc++.h>
using namespace std;
#define mem(a) memset(a, 0, sizeof(a))
#define dbg(x) cout << #x << " = " << x << endl
#define fi(i, l, r) for (int i = l; i < r; i++)
#define cd(a) scanf("%d", &a)
typedef long long ll;
const int INF = 1000;
int dp[302][302];
int a[302],b[302];
int main()
{
    int n;
    cin>>n;
    int A,B;
    cin>>A>>B;
    fi(i,0,n){
        cd(a[i]);
        cd(b[i]);
    }
    for(int i=0;i<=A;i++)
        for(int j=0;j<=B;j++)
            dp[i][j]=INF;
    dp[0][0] = 0;
    for (int i = 0; i < n; i++){
        for (int j = A; j >= 0; j--){
            for (int k = B; k >= 0; k--){
                int j2 = min(j + a[i], A);
                int k2 = min(k + b[i], B);
                dp[j2][k2] = min(dp[j2][k2], dp[j][k] + 1);
            }
        }
    }
    if (dp[A][B] == INF){
   	    cout << -1 << endl;
    }else{
        cout << dp[A][B] << endl;
    }
}
