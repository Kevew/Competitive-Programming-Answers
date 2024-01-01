#include <bits/stdc++.h>
using namespace std;

int a[200010];

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int check = 0;
	for(int i = 0;i < n-1;i++){
		if(a[i] == a[i+1]){
			check++;
		}
	}
	if(check <= 1){
		cout << "0" << endl;
		return;
	}
	int startpos = -1;
	for(int i = 0;i < n-1;i++){
		if(a[i] == a[i+1]){
			startpos = i+1;
			break;
		}
	}
	int endpos = -1;
	for(int i = n-1;i > 0;i--){
		if(a[i] == a[i-1]){
			endpos = i-1;
			break;
		}
	}
	cout << max(endpos-startpos,1) << endl;
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
