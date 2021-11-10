#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		if(i%2 == 0){
			cout << 1;
		}else{
			cout << 0;
		}
	}
	cout << endl;
	
	if(n == 3){
		for(int i = 0;i < m;i++){
			cout << "0";
		}
		cout << endl;
	}else if(n == 4){
		for(int i = 0;i < n-2;i++){
			for(int j = 0;j < m;j++){
				cout << "0";
			}
			cout << endl;
		}
	}else if(n > 4){
		for(int i = 0;i < m;i++){
			cout << "0";
		}
		cout << endl;
		
		for(int i = 0;i < n-4;i++){
			if(i%2 == 0){
				cout << "1";
				for(int j = 0;j < m-2;j++){
					cout << "0";
				}
				cout << "1";
			}else{
				for(int j = 0;j < m;j++){
					cout << "0";
				}
			}
			cout << endl;
		}
		
		
		for(int i = 0;i < m;i++){
			cout << "0";
		}
		cout << endl;
	}
	
	
	for(int i = 0;i < m;i++){
		if(i%2 == 0){
			cout << 1;
		}else{
			cout << 0;
		}
	}
	cout << endl << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
