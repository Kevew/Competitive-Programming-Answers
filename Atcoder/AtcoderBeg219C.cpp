#include <bits/stdc++.h>
using namespace std;

map<char,int> check;

bool compare(string a,string b){
	for(int i = 0;i < min(a.size(),b.size());i++){
		if(check[a[i]] == check[b[i]]){
			continue;
		}
		return check[a[i]] < check[b[i]];
	}
	return a.size() < b.size();
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string x;
	cin >> x;
	for(int i = 0;i < 26;i++){
		check[x[i]] = i;
	}
	int n;
	cin >> n;
	vector<string> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end(),compare);
	for(int i = 0;i < n;i++){
		cout << a[i] << endl;
	}
}
