#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int n = a.size();
	long long curr = 0;
	for(int i = 0;i < n;i++){
		curr += (a[i]-'0');
	}
	long long carry = 0;
	string ans = "";
	for(int i = n-1;i >= 0;i--){
		ans += ((curr%10)+(carry%10))%10 + '0';
		carry = (curr+carry)/10;
		curr -= (a[i]-'0');
	}
	if(carry){
		while(carry){
			ans += (carry%10)+'0';
			carry /= 10;
		}
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
}
