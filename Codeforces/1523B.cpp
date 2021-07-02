#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll arr[1010];
map<int,int> check;

void solve(){
	check.clear();
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	cout << 3*n << endl;
	for(int i = 0;i < n;i+=2){
		for(int j = 0;j < 3;j++){
			cout << "2 " << i+1 << " " << i+2 << endl;
			cout << "1 " << i+1 << " " << i+2 << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
