#include <bits/stdc++.h>
using namespace std;

int w[510][510],v[510][510];
int f[510][510][11];

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	if(k%2 == 1){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cout << "-1 ";
			}
			cout << "\n";
		}
		return 0;
	}
	k >>= 1;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j < m;j++){
			cin >> w[i][j];
		}
	}
	for(int i = 1;i < n;i++){
		for(int j = 1;j <= m;j++){
			cin >> v[i][j];
		}
	}
	memset(f,0x3f,sizeof(f));
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			f[i][j][0] = 0;
		}
	}
	
	for(int t = 1;t <= k;t++) {
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				f[i][j][t] = min(f[i-1][j][t-1]+v[i-1][j],f[i+1][j][t-1]+v[i][j]),
				f[i][j][t] = min(f[i][j][t],min(f[i][j-1][t-1]+w[i][j-1],f[i][j+1][t-1]+w[i][j]));
			}
		}
	}
	
	
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cout << (f[i][j][k]<<1) << " ";
		}
		cout << endl;
	}
}
