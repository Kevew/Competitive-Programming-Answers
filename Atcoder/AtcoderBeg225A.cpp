#include <bits/stdc++.h>
using namespace std;

map<char,int> fact;

int main(){
	string s;
	cin >> s;
	int ans = 6;
	for(int i = 0;i < 3;i++){
		fact[s[i]]++;
	}
	for(char i = 'a';i <= 'z';i++){
		if(fact[i] > 1){
			if(fact[i] == 2){
				ans /= 2;
			}else{
				ans /= 6;
			}
		}
	}
	cout << ans << endl;
}
