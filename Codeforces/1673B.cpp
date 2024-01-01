#include <bits/stdc++.h>
using namespace std;

void solve(){
	map<char,int> temp;
	int unique = 0;
	string a;
	cin >> a;
	int n = a.size();
	for(int i = 0;i < n;i++){
		if(temp[a[i]] == 0){
			temp[a[i]] = 1;
			unique++;
		}
	}
	map<char,int> prev;
	for(char i = 'a';i <= 'z';i++){
		prev[i] = -1;
	}
	for(int i = 0;i < n;i++){
		if(prev[a[i]] == -1){
			prev[a[i]] = i;
		}else{
			if(i-prev[a[i]] < unique){
				cout << "NO" << endl;
				return;
			}
			prev[a[i]] = i;
		
		}
	}
	cout << "YES" << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
