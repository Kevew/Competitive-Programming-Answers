#include <bits/stdc++.h>
using namespace std;

int dp[110][2];

map<char,char> switching;

void solve(){
	memset(dp,0,sizeof(dp));
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0;i < n;i++){
		if(a[i] != '?'){
			for(int j = i+1;j < n;j++){
				if(a[j] == '?'){
					a[j] = switching[a[j-1]];
				}else{
					break;
				}
			}
			for(int j = i-1;j >= 0;j--){
				if(a[j] == '?'){
					a[j] = switching[a[j+1]];
				}else{
					break;
				}
			}
		}
	}
	if(a[0] == '?'){
		a[0] = 'R';
		for(int i = 1;i < n;i++){
			a[i] = switching[a[i-1]];
		}
	}
	
	
	cout << a << endl;
}

int main(){
	switching['R'] = 'B';
	switching['B'] = 'R';
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
