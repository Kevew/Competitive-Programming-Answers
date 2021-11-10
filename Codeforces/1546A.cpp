#include <bits/stdc++.h>
using namespace std;

int a[110],b[110];

void solve(){
	int n;
	cin >> n;
	int total = 0,secondtotal = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		total += a[i];
	}
	vector<pair<int,int>> f,s;
	int ans = 0;
	for(int i = 0;i < n;i++){
		cin >> b[i];
		secondtotal += b[i];
		if(b[i] > a[i]){
			f.push_back(make_pair(b[i]-a[i],i+1));
			ans += b[i]-a[i];
		}else if(a[i] > b[i]){
			s.push_back(make_pair(a[i]-b[i],i+1));
			ans += a[i]-b[i];
		}
	}
	ans /= 2;
	if(total == secondtotal){
		cout << ans << endl;
		int fl = 0,sl = 0;
		while(fl < f.size() && sl < s.size()){
			if(f[fl].first == 0){
				fl++;
			}
			if(s[sl].first == 0){
				sl++;
			}
			if(fl == f.size() && sl == s.size()){
				break;
			}
			cout << s[sl].second << " " << f[fl].second << endl;
			f[fl].first--;
			s[sl].first--;
		}
	}else{
		cout << "-1" << endl;
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
