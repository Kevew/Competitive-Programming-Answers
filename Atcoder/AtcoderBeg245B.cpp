#include <bits/stdc++.h>
using namespace std;

map<int,bool> check;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		check[a] = true;
	}
	int ans = 0;
	while(check[ans]){
		ans++;
	}
	cout << ans << endl;
}
