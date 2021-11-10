#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int o = 0,e = 0;
	int a;
	for(int i = 0;i < n*2;i++){
		cin >> a;
		if(a%2 == 0){
			e++;
		}else{
			o++;
		}
	}
	if(e==o){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
