#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	string ans;
	while(n > 0){
		if(n%2 == 0){
			n /= 2;
			ans += "B";
		}else{
			n--;
			ans += "A";
		}
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
}
