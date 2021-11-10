#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		ll pp=0,p,ans=0;
		for(int i=0;i<n;i++) {
			scanf("%lld",&p);
			if(i!=0&&ans<(p*100+k-1)/k-pp) ans=(p*100+k-1)/k-pp;
			pp+=p;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
