#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	char prev = a[0];
	int i = 1;
	for(i = 1;i < n;i++){
		if(i == 1){
			if(a[i] == prev){
				break;
			}else{
				if(prev > a[i]){
					prev = a[i];
					continue;
				}else{
					break;
				}
			}
		}
		if(prev < a[i]){
			break;
		}
		prev = a[i];
	}
	string ans = a.substr(0,i);
	cout << ans;
	reverse(ans.begin(),ans.end());
	cout << ans << endl;	
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
/*
bbaaa
bb
bbbb
bbaabb
bbaaaabb
bbaaaaaabb
*/
