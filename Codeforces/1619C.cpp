#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin >> a >> b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int cnt = b.size()-a.size();
	int al = 0,bl = 0;
	string ans = "";
	vector<int> addlater;
	while(al < a.size() && bl < b.size()){
		if(a[al] > b[bl]){
			if(bl < b.size()-1 && cnt > 0){
				if(b[bl+1] == '1'){
					ans += '0'+(b[bl]-'0')+('9'-a[al])+1;
					bl += 2;
					al += 1;
					cnt--;
				}else{
					cout << "-1" << endl;
					return;
				}
			}else{
				cout << "-1" << endl;
				return;
			}
		}else if(a[al] <= b[bl]){
			ans += '0'+(b[bl]-a[al]);
			al++;
			bl++;
		}
	}
	while(bl < b.size()){
		ans += b[bl];
		bl++;
		cnt--;
	}
	if(cnt > 0){
		cout << "-1" << endl;
		return;
	}
	reverse(ans.begin(),ans.end());
	cout << stoll(ans) << endl;
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
