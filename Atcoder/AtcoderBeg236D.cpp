#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> arr(16);

long long n;
long long ans = 0;

void dfs(long long pos,vector<bool> check,long long value){
	bool endit = false;
	for(long long i = 0;i < 2*n-1;i++){
		if(!check[i]){
			endit = true;
		}
	}
	if(!endit){
		ans = max(ans,value);
	}
	if(pos == 2*n){
		return;
	}
	if(!check[pos]){
		check[pos] = true;
		for(long long i = 0;i < arr[pos].size();i++){
			if(!check[pos+i+1]){
				check[pos+i+1] = true;
				dfs(pos+1,check,value^arr[pos][i]);
				check[pos+i+1] = false;
			}
		}
	}else{
		dfs(pos+1,check,value);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	long long temp;
	for(long long i = 0;i < n*2-1;i++){
		for(long long j = 0;j < n*2-1-i;j++){
			cin >> temp;
			arr[i].push_back(temp);
		}
	}
	vector<bool> check(2*n,false);
	dfs(0,check,0);
	cout << ans << endl;
}
