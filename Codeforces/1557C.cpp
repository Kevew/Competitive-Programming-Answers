#include<bits/stdc++.h>
using namespace std;

int T;
int a,b;
long long mod=1000000007;
long long cf[200009]; 
long long dp[200009][2];

int main(){
	scanf("%d",&T);
	cf[0]=1;
	for(int i=1;i<=200004;i++){
		cf[i]=cf[i-1]*2%mod;
	}
	for(int i=1;i<=T;i++){
		scanf("%d%d",&a,&b);
		dp[0][0]=1;
		dp[0][1]=0;
		for(int j=1;j<=b;j++){
			if(a&1){
				dp[j][0]=(dp[j-1][0] * (cf[a-1]+1))%mod;
		    	dp[j][1]=(dp[j-1][1] * cf[a]%mod)%mod;
			}else{
				dp[j][0]=(dp[j-1][0]*(cf[a-1]-1))%mod;
		    	dp[j][1]=(dp[j-1][0]+dp[j-1][1]*cf[a]%mod)%mod;
			}
		}
		long long ans=(dp[b][0]+dp[b][1])%mod;
		printf("%lld\n",ans);
	}
	return 0;
}
