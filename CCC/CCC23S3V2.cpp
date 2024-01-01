#include <bits/stdc++.h>
using namespace std;

char boundaries[2010][2010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,r,c;
	cin >> n >> m >> r >> c;
	if(n == 1 && m == 1 && (r+c != 2)){
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}
	if(n == 1 && c != m){
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}
	if(m == 1 && r != n){
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}
	if(n == r){
		if(c%2 == 1 && m%2 == 0){
			cout << "IMPOSSIBLE" << endl;
			return 0;
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				boundaries[i][j] = (char)('a'+(i%26));
			}
		}
		if(c%2 == 1){
			for(int j = 0;j < n;j++){
				boundaries[j][(m/2)] = 'a';
			}
			c--;
		}
		for(int i = 0;i < c;i++){
			for(int j = 0;j < n;j++){
				if(i%2 == 0){
					boundaries[j][(i/2)] = 'a';
				}else if(i%2 == 1){
					boundaries[j][m-(i/2)-1] = 'a';
				}
			}
		}
	}else if(m == c){
		if(r%2 == 1 && n%2 == 0){
			cout << "IMPOSSIBLE" << endl;
			return 0;
		}
		for(int i = 0;i < m;i++){
			for(int j = 0;j < n;j++){
				boundaries[j][i] = (char)('a'+(i%26));
			}
		}
		if(r%2 == 1){
			for(int j = 0;j < m;j++){
				boundaries[(n/2)][j] = 'a';
			}
			r--;
		}
		for(int i = 0;i < r;i++){
			for(int j = 0;j < m;j++){
				if(i%2 == 0){
					boundaries[(i/2)][j] = 'a';
				}else if(i%2 == 1){
					boundaries[n-(i/2)-1][j] = 'a';
				}
			}
		}
	}else{
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				boundaries[i][j] = (char)('c'+((i%2)+(j%2))%2);
			}
		}
		for(int i = 0;i < r;i++){
			for(int j = 0;j < m;j++){
				boundaries[i][j] = 'a';
			}
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < c;j++){
				boundaries[i][j] = 'a';
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << boundaries[i][j];
		}
		cout << endl;
	}
}

/*
4 4 4 3
abba
baab

*/
