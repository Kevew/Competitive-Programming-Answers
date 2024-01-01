#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(){
	int n, m, K;
	cin >> n >> m >> K;
	vector dp(n + 1, vector(K + 1, mint(0)));
	
	dp[0][0] = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < K; j++) {
			for(int k = 1; k <= m; k++) {
				if(j + k <= K) dp[i + 1][j + k] += dp[i][j];
			}
		}
	}
	mint res = 0;
	for(int i = 1; i <= K; i++) {
		res += dp.back()[i];
	}
	cout << res.val() << endl;
}

