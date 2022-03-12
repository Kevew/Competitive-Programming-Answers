#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c,x;
	cin >> a >> b >> c >> x;
	cout << fixed << setprecision(12);
	double ans = 1;
	if(x <= a){
		cout << ans << endl;
	}else if(x > b){
		ans = 0;
		cout << ans << endl;
	}else{
		ans = c/(b-a);
		cout << ans << endl;
	}
}
