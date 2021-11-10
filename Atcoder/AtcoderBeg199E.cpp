#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> arr[20];
long long dp[1<<18];

int main(){
	int n,m;
	cin >> n >> m;
	int a,b,c;
	for(int i = 0;i < m;i++){
		cin >> a >> b >> c;
		arr[a].push_back({b,c});
	}
	bool valid[1<<n];
	valid[0] = true;
	for(int mask = 1;mask < (1<<n);mask++){
		valid[mask] = true;
		int temp = __builtin_popcount(mask);
		for(auto i:arr[temp]){
			int cnt = 0;
			for(int j = 0;j < i.first;j++){
				if((mask&(1<<j))){
					cnt++;
				}
			}
			if(cnt > i.second){
				valid[mask] = false;
				break;
			}
		}
	}
	
	dp[0] = 1;
	for(int mask = 0;mask < (1<<n);mask++){
		if(!valid[mask]){
			dp[mask] = 0;
		}else{
			for(int j = 0;j < n;j++){
				if((mask&(1<<j)) == 0){
					int newmask = mask|(1<<j);
					dp[newmask] += dp[mask];
				}
			}
		}	
	}
	cout << dp[(1<<n)-1] << endl;
	
}
