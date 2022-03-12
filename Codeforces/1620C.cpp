#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,k,x;
	cin >> n >> k >> x;
	x--;
	string a;
	cin >> a;
	long long cnt = 0;
	string ans = "";
	for(int i = n-1;i >= 0;i--){
		if(a[i] == 'a'){
			ans += string(x%(cnt*k+1),'b');
			x /= (cnt*k+1);
			cnt = 0;
			ans += 'a';
		}else{
			cnt++;
		}
	}
	ans += string(x%(cnt*k+1),'b');
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
