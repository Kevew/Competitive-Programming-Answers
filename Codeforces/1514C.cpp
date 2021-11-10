#include <bits/stdc++.h>
using namespace std;

bool ans[100005];

int main(){
    long long n;
    cin>> n;
    long long prod=1;
    for (long long i=1;i<n;i++){
        if (__gcd(n,i)==1){
            ans[i]=1;
            prod=(prod*i)%n;
        }
    }
    if(prod!=1){
    	ans[prod]=0;
	}
    printf("%d\n",count(ans+1,ans+n,1));
    for (long long i=1;i<n;i++){
        if (ans[i]) printf("%d ",i);
    }
}
