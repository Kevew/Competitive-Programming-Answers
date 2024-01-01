#include <bits/stdc++.h>
using namespace std;

string arr[11];

int n;
long long maxint;

void dfs(int index,int x,int y,long long ans,int dir){
	if(index
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0;i < n;i++){ 
		cin >> arr[i];
	}
	maxint = string(n,'0');
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			for(int p = 0;p < 8;p++){
				dfs(0,i,j,0,p);
			}
		}
	}
	cout << maxint << endl;
}
