#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int hx = 0,hy = 0;
	int lx = 0,ly = 0;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		if(b == 0){
			hx = max(hx,a);
			lx = min(lx,a);
		}else{
			hy = max(hy,b);
			ly = min(ly,b);
		}
	}
	cout << (hx-lx)*2 + (hy-ly)*2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
