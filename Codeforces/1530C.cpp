#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin >> n;
	vector<int> p,l;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		p.push_back(a);
	}
	
	for(int i = 0;i < n;i++){
		cin >> a;
		l.push_back(a);
	}
	sort(p.begin(),p.end());
	sort(l.begin(),l.end());
	int insize = n-(n/4);
	int lowestpos = n-insize,otherlowestpos = n-insize;
	int points = 0,llya = 0;
	for(int i = otherlowestpos;i < p.size();i++){
		points += p[i];
		llya += l[i];
	}
	int ans = 0;
	l.insert(l.begin(),0);
	l.insert(l.begin(),0);
	otherlowestpos++;
	while(points < llya){
		p.push_back(100);
		points += 100;
		llya += l[otherlowestpos];
		if((n+1+ans)%4==0){
			points -= p[lowestpos];
			lowestpos++;
			llya -= l[otherlowestpos];
			otherlowestpos++;
		}
		otherlowestpos = max(otherlowestpos-1,0);
		ans++;
	}
	cout << ans << endl;
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

