#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 1;i < n;i++){
		if(a[i] == '1'){
			continue;
		}
		if(a[i-1] == '0'){
			ans+=2;
		}else{
			if(i > 1){
				if(a[i-2] == '0'){
					ans++;
				}
			}else{
				continue;
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
