#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int M=1000000007;
const int N=40000;

int dp[N+1]={1};

int main(){
	for(int i = 1;i <= N;i++){
		string s = to_string(i);
		if(s != string(s.rbegin(),s.rend())){
			continue;
		}
		for(int j=i;j<=N;++j){
			dp[j]=(dp[j] + dp[j-i])%M;
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}

