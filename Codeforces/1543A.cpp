#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	long long a,b;
	cin >> a >> b;
	if(a < b){
		swap(a,b);
	}
	if(a == b){
		cout << "0 0" << endl;
		return;
	}
	long long f = (a-b);
	long long temp = (a/f)*f;
	cout << f << " " << min(b,min(a-temp,temp+f-a)) << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
