#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b,c;
	cin >> a >> b >> c;
	string ans = "";
	string t;
	cin >> t;
	for(int i = 0;i < t.size();i++){
		if(t[i] == '1'){
			ans += a;
		}else if(t[i] == '2'){
			ans += b;
		}else{
			ans += c;
		}
	}
	cout << ans << endl;
}
