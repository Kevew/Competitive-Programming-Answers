#include <bits/stdc++.h>
using namespace std;

bool used[16][16];
int n,m,a,b;
long long ans = 0;

void dfs(){
	if(a == 0 && b == 0){
		ans++;
		return;
	}
	int f = -1,s = -1;
	for(int i = 0;i < n && f == -1;i++){
		for(int j = 0;j < m && f == -1;j++){
			if(!used[i][j]){
				f = i;
				s = j;
			}
		}
	}
	if(a > 0){
		if(f + 1 < n && !used[f+1][s]){
			used[f+1][s] = true;
			used[f][s] = true;
			a--;
			dfs();
			a++;
			used[f+1][s] = false;
			used[f][s] = false;
		}
		if(s + 1 < m && !used[f][s+1]){
			used[f][s+1] = true;
			used[f][s] = true;
			a--;
			dfs();
			a++;
			used[f][s+1] = false;
			used[f][s] = false;
		}
	}
	if(b > 0){
		used[f][s] = true;
		b--;
		dfs();
		b++;
		used[f][s] = false;
	}
}

int main(){
	cin >> n >> m >> a >> b;
	dfs();
	cout << ans << endl;
}
