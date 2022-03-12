#include <bits/stdc++.h>
using namespace std;

map<int,int> check;

int main(){
	int n;
	cin >> n;
	int a;
	for(int i = 0;i < n*4-1;i++){
		cin >> a;
		check[a]++;
	}
	for(int i = 1;i <= n;i++){
		if(check[i] == 3){
			cout << i << endl;
			return 0;
		}
	}
}
