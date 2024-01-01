#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	string a;
	cin >> a;
	vector<int> ans(n,0);
	if(m%2 == 0){
		for(int i = 0;i < n;i++){
			if(a[i] == '0'){
				if(m > 0){
					m--;
					a[i] = '1';
					ans[i] = 1;
				}else{
					a[i] = '0';
				}
			}
		}
		if(m%2 == 1){
			a[n-1] = '0';
		}
		ans[n-1] += m;
	}else{
		for(int i = 0;i < n;i++){
			if(a[i] == '1'){
				if(m > 0){
					m--;
					a[i] = '1';
					ans[i] = 1;
				}else{
					a[i] = '0';
				}
			}else{
				a[i] = '1';
			}
		}
		if(m%2 == 1){
			a[n-1] = '0';
		}
		ans[n-1] += m;
	}
	cout << a << endl;
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
