#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	string a;
	cin >> a;
	string rev = a;
	reverse(a.begin(),a.end());
	bool palin = false;
	if(rev == a){
		palin = true;
	}
	if(k == 0){
		cout << "1" << endl;
	}else{
		if(palin){
			cout << "1" << endl;
		}else{
			cout << "2" << endl;
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
