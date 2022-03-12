#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> check;

int main(){
	int n,q;
	cin >> n >> q;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		check[a].push_back(i+1);
	}
	
	while(q--){
		int x,k;
		cin >> x >> k;
		if(check[x].size() >= k){
			cout << check[x][k-1] << endl;
		}else{
			cout << "-1" << endl;
		}
	}
}
