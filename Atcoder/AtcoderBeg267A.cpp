#include <bits/stdc++.h>
using namespace std;

map<string,int> ans;

int main(){
	string a;
	cin >> a;
	ans["Monday"] = 5;
	ans["Tuesday"] = 4;
	ans["Wednesday"] = 3;
	ans["Thursday"] = 2;
	ans["Friday"] = 1;
	cout << ans[a] << endl;
}
