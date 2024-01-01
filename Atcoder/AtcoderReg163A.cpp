#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 1;i < n;i++){
		if(a[i] > a[0]){
			cout << "Yes" << endl;
			return;
		}
	}
	
	string curr = "";
	curr += a[0];
	int lookat = 0;
	string addon = "";
	for(int i = 1;i < n;i++){
		if(lookat+1 > curr.size()){
			cout << "Yes" << endl;
			return;
		}
		if(a[lookat] == a[i] && lookat == 0){
			lookat = 1;
			addon += a[i];
			continue;
		}
		
		if(lookat){
			if(a[lookat] == a[i]){
				lookat++;
				addon += a[i];
			}else if(a[lookat] < a[i]){
				cout << "Yes" << endl;
				return;
			}else{
				lookat = 0;
				curr += addon;
				addon = "";
			}
		}else{
			curr += a[i];
		}
	}
	cout << "No" << endl;
	return;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
