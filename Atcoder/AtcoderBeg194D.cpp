#include <bits/stdc++.h>
using namespace std;

int main(){
	double dp[100010];
    double n;
    cin >> n;
    dp[1]=0;
    for(int i = 2;i <= n;i++){
        dp[i] = dp[i-1] + n/(n-i+1);
    }
    cout << fixed << setprecision(9) << dp[(int)n] << endl;
}
