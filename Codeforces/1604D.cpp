#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b;
	cin >> a >> b;
	if(a == b){
		cout << a << endl;
		return;
	}
	if(a > b){
		cout << a+b << endl;
	}else{
		int temp = (b/a)*a;
		cout << (abs(temp-b)/2)+temp << endl;
	}
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
