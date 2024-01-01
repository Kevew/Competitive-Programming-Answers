#include <bits/stdc++.h>
using namespace std;

bool arr[510][510];

void solve(){
	int n,m;
	cin >> n >> m;
	int totalCnt = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			char temp;
			cin >> temp;
			arr[i][j] = temp-'0';
			totalCnt += arr[i][j];
		}
	}
	int minDel = 5;
	for(int i = 0;i < n-1;i++){
		for(int j = 0;j < m-1;j++){
			int cnt = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
			minDel = min(minDel, cnt-arr[i][j]);
			minDel = min(minDel, cnt-arr[i][j+1]);
			minDel = min(minDel, cnt-arr[i+1][j]);
			minDel = min(minDel, cnt-arr[i+1][j+1]);
		}
	}
	cout << totalCnt-max(0,minDel-1) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
