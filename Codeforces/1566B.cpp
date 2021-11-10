#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	bool f = false,s = false;
	int cnt = 0;
	for(int i = 0;i < a.size();i++){
		if(a[i] == '0'){
			f = true;
			cnt++;
		}else if(a[i] == '1'){
			s = true;
		}
	}
	if(f && !s){
		cout << "1" << endl;
	}else if(!f && s){
		cout << "0" << endl;
	}else{
		int ans = 0;
		for(int i = 0;i < a.size();i++){
			if(i == 0){
				if(a[i] == '0'){
					ans++;
				}
				continue;
			}
			if(a[i] != a[i-1] && a[i] == '0'){
				ans++;
			}
		}
		cout << min(2,ans) << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
