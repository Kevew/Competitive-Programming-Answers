#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int zero = 0,ones = 0;
	for(int i = 0;i < a.size();i++){
		if(a[i] == '0'){
			zero++;
		}else{
			ones++;
		}
	}
	if(zero >= 2 || ones >= 2){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
