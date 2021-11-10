#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> check(51,0);
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(!check[a]){
			check[a] = i+1;
		}
	}
	
	for(int i = 0;i < m;i++){
		cin >> a;
		cout << check[a] << " ";
		for(int j = 1;j <= 50;j++){
			if(check[j] < check[a]){
				check[j]++;
			}
		}
		check[a] = 1;
	}
}
