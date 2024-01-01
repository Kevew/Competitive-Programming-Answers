#include <bits/stdc++.h>
using namespace std;

map<char,int> cnt;

int main(){
	string a;
	cin >> a;
	string ans = "";
	for(int i = 0;i < a.size();i++){
		if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u'){
			ans += a[i];
		}
		cnt[a[i]]++;
	}
	cout << ans << endl;
}
