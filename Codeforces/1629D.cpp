#include <bits/stdc++.h>
using namespace std;

map<string,bool> exist;

void solve(){
	exist.clear();
	int n;
	cin >> n;
	string a;
	bool ignore = false;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(ignore){
			exist[a] = true;
			continue;
		}
		string b = string(a.rbegin(), a.rend());
		string c = a;
		c.pop_back();
		if(a == b){
			ignore = true;
			exist[a] = true;
			continue;
		}
		if(exist[b]){
			ignore = true;
			exist[a] = true;
			continue;
		}
		
		
		string temp = a;
		string check = "";
		for(int j = a.size()-1;j >= 0;j--){
			string ex = "";
			ex += a[j];
			temp.insert(a.size()-j-1,ex);
			check += ex;
			if(temp == string(temp.rbegin(), temp.rend()) && exist[check]){
				ignore = true;
				exist[a] = true;
				continue;
			}
		}
		exist[a] = true;
		exist[c] = true;
	}
	if(ignore){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
