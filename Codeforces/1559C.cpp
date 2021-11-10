#include <bits/stdc++.h>
using namespace std;

bool paths[10010][10010];

void solve(){
	memset(paths,false,sizeof(paths));
	int n;
	cin >> n;
	int a;
	for(int i = 1;i <= n;i++){
		cin >> a;
		if(a == 0){
			paths[i][n+1] = true;
		}else{
			paths[n+1][i] = true;
		}
	}
	paths[n+1][n+1] = true;
	
	for(int i = 1;i <= n;i++){
		if(i == 1){
			if(paths[n+1][i] == true){
				cout << n+1 << " ";
				for(int j = 1;j <= n;j++){
					cout << j << " ";
				}
				cout << endl;
				return;
			}
		}
		if(paths[i][n+1] == true && paths[n+1][i+1] == true){
			for(int j = 1;j <= i;j++){
				cout << j << " ";
			}
			cout << n+1 << " ";
			for(int j = i+1;j <= n;j++){
				cout << j << " ";
			}
			cout << endl;
			return;
		}
	}
	cout << "-1" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
