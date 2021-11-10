#include <bits/stdc++.h>
using namespace std;

string newvalue(string n,char addon,int start){
	for(int i = start;i < n.size();i++){
		n[i] = addon;
	}
	return n;
}

void check(map<char,int>& d,char value){
	d[value]--;
	if(d[value] == 0){
		d.erase(value);
	}
}

string solve(){
	string a;
	int b;
	cin >> a >> b; 
	map<char,int> d;
	int pref = 0;
	while(pref < a.size()){
		if(d.count(a[pref])){
			d[a[pref++]]++;
			continue;
		}
		if(d.size() == b){
			break;
		}
		d[a[pref++]]++;
	}
	if(pref == a.size()){
		return a;
	}
	while(true){
		if(a[pref] == '9'){
			check(d,a[--pref]);
			continue;
		}
		
		if(d.size() < b){
			d[++a[pref]]++;
			return newvalue(a,d.size() < b? '0':d.begin()->first,pref+1);
		}
		auto i = d.upper_bound(a[pref]);
		if(i == d.end()){
			check(d,a[--pref]);
			continue;
		}
		
		a[pref] = i->first;
		return newvalue(a,d.begin()->first,pref+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cout << solve() << endl;
	}
}
