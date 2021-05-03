#include <bits/stdc++.h>
using namespace std;

map<int,bool> check;

void precalc(){
	int temp = 0;
	for(int i = 1;temp <= 1000000000;i+=2){
		temp += i*2;
		check[temp] = true;
	}
	
	for(int i = 2;i*i <= 1000000000;i+=2){
		check[i*i] = true;
		check[(i*i)+(i*i)] = true;
	}
}

void solve(){
	int n;
	cin >> n;
	if(n == 2){
		cout << "YES" << endl;
	}else{
		if(check[n]){
			cout << "YES" << endl;
			return;
		}
		cout << "NO" << endl;
	}
}

int main(){
	precalc();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
