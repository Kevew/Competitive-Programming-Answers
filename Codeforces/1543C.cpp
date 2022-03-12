#include <bits/stdc++.h>
using namespace std;
 
long double scale = 1e+6;
 
long double calc(int c,int m,int p,int v){
	long double ans = p/scale;
	if(c > 0){
		if(c > v){
			if(m > 0){
				ans += (c/scale)*(1+calc(c-v,m+v/2,p+v/2,v));
			}else{
				ans += (c/scale)*(1+calc(c-v,0,p+v,v));
			}
		}else{
			if(m > 0){
				ans += (c/scale)*(1+calc(0,m+c/2,p+c/2,v));
			}else{
				ans += (c/scale)*(1+calc(0,0,p+c,v));
			}
		}
	}
	if(m > 0){
		if(m > v){
			if(c > 0){
				ans += (m/scale)*(1+calc(c+v/2,m-v,p+v/2,v));
			}else{
				ans += (m/scale)*(1+calc(0,m-v,p+v,v));
			}
		}else{
			if(c > 0){
				ans += (m/scale)*(1+calc(c+m/2,0,p+m/2,v));
			}else{
				ans += (m/scale)*(1+calc(0,0,p+m,v));
			}
		}
	}
	return ans;
}
 
void solve(){
	long double tc,tm,tp,tv;
	cin >> tc >> tm >> tp >> tv;
	int c = round(tc*scale);
	int m = round(tm*scale);
	int p = round(tp*scale);
	int v = round(tv*scale);
	long double ans = calc(c,m,p,v);
	cout << setprecision(12) << fixed << ans << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
