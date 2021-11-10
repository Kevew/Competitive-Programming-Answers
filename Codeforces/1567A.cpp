#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	char curr;
	bool skip = false;
	for(int i = 0;i < n;i++){
		cin >> curr;
		if(skip){
			cout << "R";
			skip = false;
		}else{
			if(curr == 'U'){
				cout << "D";
			}else if(curr == 'D'){
				cout << "U";
			}else{
				skip = true;
				cout << "L";
			}
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
