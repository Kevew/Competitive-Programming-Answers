#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int edge = 0,cnt = n-2;
	for(int i = 0;i < n-1;i++){
		int a,b;
		cin >> a >> b;
		if(a == m || b == m){
			edge++;
		}
	}
	if(edge < 2 || cnt%2 == 0){
		cout << "Ayush" << endl;
	}else{
		cout << "Ashish" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
