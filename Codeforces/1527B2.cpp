#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	bool palindrome = true;
	int cnt0 = 0,cnt1 = 0;
	for(int i = 0;i < n;i++){
		cnt0 += s[i]=='0';
	}
	
	for(int i = 0;i < n/2;i++){
		if(s[i] != s[n-i-1]){
			palindrome = false;
		}
		if((s[i] == '1' || s[n-i-1] == '1') && s[i] != s[n-1-i]){
			cnt1++;
		}
	}
	
	if(palindrome){
		if(cnt0 == 1){
			cout << "BOB" << endl;
			return;
		}
		if(cnt0%2){
			cout << "ALICE" << endl;
			return;
		}
		cout << "BOB" << endl;
		return;
	}
	if(cnt0 == 2 && cnt1 == 1){
		cout << "DRAW" << endl;
		return;
	}
	cout << "ALICE" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
