#include <bits/stdc++.h>
#define N 100010
using namespace std;

int a[N],s[N];

int main()
{
    int n;
   	cin >> n;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]),s[i]=s[i-1]^a[i];
    int ans=1e9;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=min(n,i+32);j++)
            for(int k=i;k>=max(0,i-32);k--)
     	       if((s[k-1]^s[i])>(s[i]^s[j])) ans=min(ans,j-k-1);
    printf("%d\n",ans>n?-1:ans);
}

