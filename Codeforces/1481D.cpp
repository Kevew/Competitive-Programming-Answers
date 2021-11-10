#include <bits/stdc++.h>
using namespace std;

char grid[1010][1010];
int has[1010][2];

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i <= n;i++){
		has[i][0] = -1;
		has[i][1] = -1;
	}
	for(int i = 0;i < n;i++){
		cin >> grid[i];
		for(int j = 0;j < n;j++){
			if(i == j){
				continue;
			}
			has[i][grid[i][j]-'a'] = j;
		}
	}
	
	if(m%2 == 1){
		cout << "YES" << endl;
		for(int i = 0;i < m+1;i++){
			cout << i%2 +1 << " ";
		}
		cout << endl;
		return;
	}
	
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			if(grid[i][j] == grid[j][i]){
				cout << "YES" << endl;
				for(int k = 0;k < m+1;k++){
					if(k%2==0){
						cout << i+1 << " ";
					}else{
						cout << j+1 << " ";
					}
				}
				cout << endl;
				return;
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(i == j){
				continue;
			}
			if(has[j][grid[i][j]-'a'] == -1){
				continue;
			}
			cout << "YES" << endl;
			int cur = has[j][grid[i][j]-'a'];
			if((m/2)%2 == 1){
				for(int k = 0;k < m+1;k++){
					if(k%4 == 0){
						cout << i+1 << " ";
					}else if(k%4 == 2){
						cout << cur+1 << " ";
					}else{
						cout << j+1 << " ";
					}
				}
				cout << endl;
				return;
			}
			cout << j+1 << " ";
			for(int k = 0;k < m / 2;k++){
				if(k%2 == 1){
					cout << j+1 << " ";
				}else{
					cout << cur+1 << " ";
				}
			}
			for(int k = 0 ;k < m / 2;k++){
				if(k%2 == 1){
					cout << j+1 << " ";
				}else{
					cout << i+1 << " ";
				}
			}
			cout << endl;
			return;			
		}
	}
	cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
