#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int t,n,x[N],y[N];

int main()
{
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1;i <= n;i++){
			scanf("%d%d",&x[i],&y[i]);
		}
		sort(x+1,x+n+1);
		sort(y+1,y+n+1);
		printf("%lld\n",1ll*(x[n/2+1]-x[(n+1)/2]+1)*(y[n/2+1]-y[(n+1)/2]+1));
	}
	return 0;
}
