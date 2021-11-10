#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll sum=0,a,flag=0;
		for(int i=1;i<=n;i++){
			scanf("%lld",&a),sum+=a;
			if(sum<i*(i-1)/2) flag=1;
		} 
		if(!flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

