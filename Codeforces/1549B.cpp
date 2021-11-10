#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	string b;
	cin >> a >> b;
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(b[i] == '1'){
			if(i-1 >= 0 && a[i-1] == '1'){
				ans++;
			}else if(a[i] == '0'){
				a[i] = '2';
				ans++;	
			}else if(i+1 < n && a[i+1] == '1'){
				a[i+1] = '2';
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

