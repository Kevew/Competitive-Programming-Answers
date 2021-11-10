#include <bits/stdc++.h>
using namespace std;

int dp[200010][7];

int main(){
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	dp[n][0] = 1;
  	for(int i = n;i >= 1;i--){
    	auto val = a[i - 1] - '0';
    	for(int j = 0;j < 7;j++){
      		if(b[i - 1] == 'T'){
        		dp[i - 1][j] = dp[i][10 * j % 7] || dp[i][(10 * j + val) % 7];
      		}else{
        		dp[i - 1][j] = dp[i][10 * j % 7] && dp[i][(10 * j + val) % 7];
      		}
   	 	}
  	}
  	
  	/*
  	for(int i = 0;i <= n;i++){
  		for(int j = 0;j < 7;j++){
  			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	*/
  	
  	if(dp[0][0]){
    	cout << "Takahashi" << endl;
  	}else{
    	cout << "Aoki" << endl;
  	}
}


