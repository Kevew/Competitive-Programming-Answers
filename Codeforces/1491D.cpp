#include <bits/stdc++.h>
using namespace std;

long long main(){
	long long q;
	cin >> q;
	long long u,v;
	while(q--){
		cin >> u >> v;
		long long temp = 0;
		bool ans = (u <= v);
		for(long long i=0; i<30 ;i++){
			if((u>>i)&1) temp++;
			if((v>>i)&1) temp--;
			if(temp<0) ans=false;
		}
		if(ans) cout << "YES\n";
		else cout << "NO\n";
	}
}
