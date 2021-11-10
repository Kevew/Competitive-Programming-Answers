#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	string a;
	cin >> n >> a;
	for(int i = 0;i < n;i++){
		if(a[i] == a[0]){
			continue;
		}else{
			cout << i << " " << i+1 << endl;
			return;
		}
	}
	cout << "-1 -1" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
