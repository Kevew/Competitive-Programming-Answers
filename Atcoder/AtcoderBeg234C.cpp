#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	string ans = "";
	while(a > 0){
		if(a%2 == 0){
			ans += '0';
		}else{
			ans += '2';
		}
		a = a/2;
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
}
