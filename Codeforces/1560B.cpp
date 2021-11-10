#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	if(b > a){
		swap(a,b);
	}
	int diff = a-b;
	if(a > diff*2){
		cout << "-1" << endl;
		return;
	}
	if(a-1-diff == b-1){
		if(c > diff*2){
			cout << "-1" << endl;
			return;
		}
		if(c >= diff+1){
			cout << c-diff << endl;
		}else{
			cout << c+diff << endl;
		}
		return;
	}
	cout << "-1" << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
