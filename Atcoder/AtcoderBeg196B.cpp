#include <bits/stdc++.h>
using namespace std;

int main(){
	string ans = "";
	string a;
	cin >> a;
	for(int i = 0;i < a.size();i++){
		if(a[i] == '.'){
			break;
		}
		ans += a[i];
	}
	cout << ans << endl;
}
