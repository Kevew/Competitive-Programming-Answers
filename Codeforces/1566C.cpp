#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	int ans = 0;
	bool check1 = false,check2 = false;
	for(int i = 0;i < n;i++){
		int f = a[i]-'0',s = b[i]-'0';
		if(s < f){
			swap(f,s);
		}
		if(f == 1 && s == 1){
			if(check2 == true){
				ans++;
				check2 = false;
			}else{
				check1 = true;
			}
		}else if(f == 0 && s == 1){
			ans += 2;
			check2 = false;
			check1 = false;
		}else if(f == 0 && s == 0){
			if(check1){
				ans += 2;
				check1 = false;
			}else{
				check2 = true;
				ans++;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
