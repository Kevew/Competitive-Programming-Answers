#include<bits/stdc++.h>
using namespace std;

long long dp[4][3000005];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  	int n;
  	long long k;
  	cin >> n >> k;
  	dp[0][0]=1;
  	for(int i=0;i<3;i++){
    	for(int j=0;j<=i*n;j++){
      		dp[i+1][j+1]+=dp[i][j];
      		dp[i+1][j+n+1]-=dp[i][j];
    	}
    	for(int j=1;j<=(i+1)*n;j++){
      		dp[i+1][j]+=dp[i+1][j-1];
    	}
  	}
	
  
  	int x;
  	for(int i=3;i<=3*n;i++){
    	if(k<=dp[3][i]){x=i;break;}
    	else{k-=dp[3][i];}
  	}
  	for(int i = 1;i <= n;i++){
  		int jmin = max(1,x-i-n);
  		int jmax = min(n,x-i-1);
  		if(jmin > jmax){
  			continue;
		}
		if(k > (jmax-jmin+1)){
			k -= (jmax-jmin+1);
			continue;
		}
		long long y = jmin+k-1;
		long long z = x-i-y;
		cout << i << " " << y << " " << z << endl;
		return 0;
	}
}
