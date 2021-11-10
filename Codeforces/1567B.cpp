#include <bits/stdc++.h>
using namespace std;

int calXOR(int n){
  	if(n % 4 == 0){
  		return n;
	}	
  	if(n % 4 == 1){
  		return 1;
	}
	if(n % 4 == 2){
		return n + 1;
	}
  	return 0;
}

void solve(){
	int a,b;
	cin >> a >> b;
	int temp = calXOR(a-1);
	int ans = a;
	if(temp > b || temp < b){
		if((temp^b) == a){
			ans++;
		}
		ans++;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
