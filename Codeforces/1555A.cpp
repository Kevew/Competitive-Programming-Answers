#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	if(n <= 10){
		if(n >= 1 && n <= 6){
			cout << "15" << endl;
			return;
		}else if(n > 6 && n <= 8){
			cout << "20" << endl;
			return;
		}else if(n > 8 && n <= 10){
			cout << "25" << endl;
			return;
		}
	}
	if(n%2 == 1){
		n++;
	}
	cout << (n*5)/2 << endl;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
