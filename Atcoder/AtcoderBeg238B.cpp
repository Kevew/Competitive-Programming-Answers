#include <bits/stdc++.h>
using namespace std;

map<int,bool> check;

int main(){
	int n;
	cin >> n;
	int temp;
	int pos = 0;
	check[pos] = true;
	for(int i = 0;i < n;i++){
		cin >> temp;
		pos += temp;
		pos %= 360;
		check[pos] = true;
	}
	
	int ans = 0,curr = 0;
	for(int i = 0;i <= 720;i++){
		if(check[i%360]){
			ans = max(ans,curr);
			curr = 0;
		}
		curr++;
	}
	cout << ans << endl;
}
