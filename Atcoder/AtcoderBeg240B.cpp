#include <bits/stdc++.h>
using namespace std;

map<int,bool> check;

int main(){
	int n;
	cin >> n;
	int ans = 0,temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		if(!check[temp]){
			ans++;
		}
		check[temp] = true;
	}
	cout << ans << endl;
}
