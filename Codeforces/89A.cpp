#include <bits/stdc++.h>
using namespace std;

int n,m,k;

int main(){
	cin >> n >> m >> k;
	if(n%2==0){
		cout << "0" << endl;
	}else{
		int x = INT_MAX;
		for(int i=1,y;i<=n;i++){
			scanf("%d",&y);
			if(i&1){
				x=min(x,y);
			}
		}
		m /= n/2+1;
		printf("%I64d\n",min(1ll*x,1ll*m*k));
	}
}
