#include<bits/stdc++.h>
using namespace std;
int dp[109][10009];
int main(){
	int n,i,j,k,l,a,b,s=0;
	scanf("%d",&n);
	memset(dp,-9,sizeof(dp)),dp[0][0]=0;
	for(i=1;i<=n;++i){
		scanf("%d%d",&a,&b),s+=b;
		for(j=i;j;--j)for(k=10001;k>=a;--k){
			dp[j][k]=max(dp[j][k],dp[j-1][k-a]+b);
		}
	}
	for(i=1;i<=n;++i){
		int a=0;
		for(j=0;j<10001;++j){
			a=max(a,min(j*2,dp[i][j]+s));
		}
		printf("%.2lf ",a/2.0);
	}
	return 0;
}
