#include <bits/stdc++.h>
using namespace std;

long long dp[65][65];

int main(){
	long long a,b,k;
	cin >> a >> b >> k;
	dp[0][0] = 1;
	for(int i = 0;i <= a;i++){
		for(int j = 0;j <= b;j++){
			if(i > 0){
				dp[i][j] += dp[i-1][j];
			}
			if(j > 0){
				dp[i][j] += dp[i][j-1];
			}
		}
	}
	
	while(a > 0 && b > 0){
		if(k <= dp[a-1][b]){
			cout << "a";
			a--;
		}else{
			k -= dp[a-1][b];
			cout << "b";
			b--;
		}
	}
	
	for(int i = 0;i < a;i++){
		cout << "a";
	}
	
	for(int i = 0;i < b;i++){
		cout << "b";
	}
	cout << endl;
}
