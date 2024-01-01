#include <bits/stdc++.h>
using namespace std;

map<int,map<int,bool>> follows;

int main(){
	int n,q;
	cin >> n >> q;
	while(q--){
		int t,a,b;
		cin >> t >> a >> b;
		if(t == 1){
			follows[a][b] = true;
		}else if(t == 2){
			follows[a][b] = false;
		}else{
			if(follows[a][b] && follows[b][a]){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
	}
}
