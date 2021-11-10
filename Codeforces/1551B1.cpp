#include <bits/stdc++.h>
using namespace std;
 
map<char,int> temp;
 
void solve(){
	temp.clear();
	string s;
	cin >> s;
	int n = s.size();
	int r = 0,g = 0;
	for(int i = 0;i < n;i++){
		if(temp[s[i]] == 0){
			r++;
		}else if(temp[s[i]] == 1){
			g++;
		}
		temp[s[i]]++;
	}
	if(r > g){
		int temp = (r-g)/2;
		g += temp;
	}
	cout << g << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
