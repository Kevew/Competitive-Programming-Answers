#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b;
	cin >> a >> b;
	int cnt = 1;
	vector<pair<char,int>> newa;
	for(int i = 1;i < a.size();i++){
		if(a[i] == a[i-1]){
			cnt++;
		}else{
			newa.push_back({a[i-1],cnt});
			cnt = 1;
		}
	}
	newa.push_back({a[a.size()-1],cnt});
	cnt = 1;
	vector<pair<char,int>> newb;
	for(int i = 1;i < b.size();i++){
		if(b[i] == b[i-1]){
			cnt++;
		}else{
			newb.push_back({b[i-1],cnt});
			cnt = 1;
		}
	}
	newb.push_back({b[b.size()-1],cnt});
	if(newb.size() != newa.size()){
		cout << "No" << endl;
		return 0;
	}
	
	for(int i = 0;i < newa.size();i++){
		if(newa[i].first != newb[i].first){
			cout << "No" << endl;
			return 0;
		}
		if(newa[i].second > newb[i].second){
			cout << "No" << endl;
			return 0;
		}
		if(newa[i].second == 1 && newb[i].second > 1){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
