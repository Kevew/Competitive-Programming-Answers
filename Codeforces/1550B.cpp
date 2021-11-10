#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	string s;
	cin >> s;
	int ones = 0,zeros = 0;
	for(int i = 0;i < a-1;i++){
		if(s[i] != s[i+1]){
			if(s[i] == '1'){
				ones++;
			}else{
				zeros++;
			}
		}
	}
	if(s[a-1] == '1'){
		ones++;
	}else{
		zeros++;
	}
	if(c < 0){
		cout << (min(ones,zeros)+1)*c + a*b << endl;
	}else{
		cout << a*b + a*c << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
