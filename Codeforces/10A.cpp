#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,p1,p2,p3,t1,t2;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int ans = 0,y = 0,x = 0,t = 0;
	int a,b;
	for(int i=1; i<=n; i++){
		cin >> a >> b;
	    ans += (b-a)*p1;
		t = a-y;
		x = a, y = b;
		if(i == 1) continue;
		if(t < t1){
			ans+=t*p1;
			continue;
		}
		ans += t1*p1;
		t -= t1;
		if(t<t2){
			ans+=t*p2;
			continue;
		}
		ans += t2*p2;
		t -= t2;ans += t*p3;
	}
	cout << ans << endl;;
}
