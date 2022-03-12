#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	string a;
	cin >> a;
	int pos = -1;
	for(int i = 0;i < a.size()-1;i++){
		if((a[i]-'0')+(a[i+1]-'0') >= 10){
			pos = i;
		}
	}
	string ans = "";
	if(pos != -1){
		ans += a.substr(0,pos);
		ans += to_string((a[pos]-'0')+(a[pos+1]-'0'));
		ans += a.substr(pos+2,a.size()-pos-2);
	}else{
		ans += to_string((a[0]-'0')+(a[1]-'0'));
		ans += a.substr(2,a.size()-1);
	}
	cout << ans << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
