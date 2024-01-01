#include <bits/stdc++.h>
using namespace std;

bool arr[110][110];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		arr[a][b] = true;
		arr[b][a] = true;
	}
	int ans = 0;
	for(int i = 1;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			for(int x = j+1;x <= n;x++){
				if(arr[i][j] && arr[j][x] && arr[x][i]){
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
}
