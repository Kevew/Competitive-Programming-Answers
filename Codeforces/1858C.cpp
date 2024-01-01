#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int vis[n+1];
	for(int i = 0;i <= n;i++){
		vis[i] = false;
	}
	vis[1] = true;
	int placeholder = 1;
	int curr = 1;
	for(int i = 0;i < n;i++){
		if(i == 0){
			cout << "1 ";
			placeholder *= 2;
			continue;
		}
		if(placeholder > n){
			while(vis[curr]){
				curr++;
			}
			placeholder = curr;
			i--;
		}else{
			cout << placeholder << " ";
			vis[placeholder] = true;
			placeholder *= 2;
		}
	}
	cout << endl;
}

int main(){
	 
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
