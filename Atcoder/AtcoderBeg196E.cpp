#include <bits/stdc++.h>
using namespace std;

long long l = -1e18,r = 1e18;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	long long a,t;
	long long b = 0;
	for(int i = 0;i < n;i++){
		cin >> a >> t;
		if(t == 1){
			b += a;
			l += a,r += a;
		}else if(t == 2){
			l = max(l,a);
			r = max(l,r);
		}else{
			r = min(r,a);
			l = min(r,l);
		}
	}
	long long f = l-b,s = r-b;
	int q;
	cin >> q;
	while(q--){
		cin >> a;
		if(a <= f){
			cout << l << endl;
		}else if(a >= s){
			cout << r << endl;
		}else{
			cout << a+b << endl;
		}
	}
}
