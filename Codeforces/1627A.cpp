#include <bits/stdc++.h>
using namespace std;

char arr[100][100];

void solve(){
	int n,m,r,c;
	cin >> n >> m >> r >> c;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
			if(arr[i][j] == 'B'){
				cnt++;
			}
		}
	}
	
	if(cnt == 0){
		cout << "-1" << endl;
		return;
	}
	r--;
	c--;
	if(arr[r][c] == 'B'){
		cout << "0" << endl;
		return;
	}
	
	
	bool exist = false;
	for(int i = 0;i < m;i++){
		if(arr[r][i] == 'B'){
			exist = true;
		}
	}
	for(int i = 0;i < n;i++){
		if(arr[i][c] == 'B'){
			exist = true;
		}
	}
	if(exist){
		cout << "1" << endl;
	}else{
		cout << "2" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
