#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> arr(n,vector<int>(m));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
		}
	}
	
	auto possible = [&](int cut) -> bool{
		vector<bool> column(m,false);
		bool has_double = false;
		for(int i = 0;i < n;i++){
			int cnt = 0;
			for(int j = 0;j < m;j++){
				cnt += arr[i][j] >= cut;
				column[j] = column[j] || arr[i][j] >= cut;
			}
			has_double = has_double || cnt >= 2;
		}
		return has_double&&accumulate(column.begin(),column.end(),0) == m;
	};
	
	
	
	int l = 0,r = 1e9;
	while(l < r){
		int mid = l + (r-l+1)/2;
		if(possible(mid)){
			l = mid;
		}else{
			r = mid-1;
		}
	}
	cout << l << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
