#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	vector<pair<long long,long long>> friends(n);
	for(int i = 0;i < n;i++){
		cin >> friends[i].first >> friends[i].second;
	}
	sort(friends.begin(),friends.end());
	long long pos = 0,i = 0;
	while(i < n && friends[i].first-pos <= m){
		m -= friends[i].first-pos;
		pos = friends[i].first;
		m += friends[i].second;
		i++;
	}
	pos += m;
	cout << pos << endl;
	
}
