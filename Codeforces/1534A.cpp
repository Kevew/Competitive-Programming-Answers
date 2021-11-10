#include <bits/stdc++.h>
using namespace std;

char grid[51][51];

void solve(){
	int n,m;
	cin >> n >> m;
	set<int> s;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> grid[i][j];
			if(grid[i][j] != '.'){
				s.insert((i+j+(grid[i][j] == 'R'))%2);
			}
		}
	}
	if(s.size() == 2){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
		int co = s.count(1);
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cout << ((i+j+co)%2 == 1 ? 'R': 'W');
			}
			cout << endl;
		}
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
