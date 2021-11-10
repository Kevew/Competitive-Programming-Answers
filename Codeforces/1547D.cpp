#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int prev = 0;
	cin >> prev;
	cout << "0 ";
	int a;
	for(int i = 1;i < n;i++){
		cin >> a;
		int temp = a|prev;
		prev = temp;
		cout << (temp^a) << " ";
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
