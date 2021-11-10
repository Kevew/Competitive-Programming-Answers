#include <bits/stdc++.h>
using namespace std;

int distinct(string s){
	sort(s.begin(),s.end());
	return unique(s.begin(),s.end())-s.begin();
}

string filter(string a,int c){
	bool first = false;
	string returnval;
	for(int i = 0;i < a.size();i++){
		if(first && a[i] != c){
			returnval += a[i];
		}else if(a[i] == c){
			first = true;
		}
	}
	return returnval;
}

void solve(){
	string a;
	cin >> a;
	int m = distinct(a);
	unordered_set<char> used(a.begin(),a.end());
	string ans = "";
	while(m > 0){
		char addon = -1;
		for(auto c: used){
			if(distinct(filter(a,c)) == m-1){
				addon = max(addon,c);
			}
		}
		ans += addon;
		a = filter(a,addon);
		used.erase(addon);
		m--;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
