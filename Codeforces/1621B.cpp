#include <bits/stdc++.h>
using namespace std;

const int temp = 1e9+1;

void solve(){
	int n;
	cin >> n;
	int costl = temp,costr = temp;
	int minl = temp,maxr = 0;
	int maxlength = 0,costLen = temp;
	for(long long i = 0;i < n;i++){
		int l,r,c;
		cin >> l >> r >> c;
		if(l < minl){
			minl = l;
			costl = temp;
		}
		if(l == minl){
			costl = min(costl,c);
		}
		
		if(r > maxr){
			maxr = r;
			costr = temp;
		}
		if(r == maxr){
			costr = min(costr,c);
		}
		
		
		if(maxlength < r-l+1){
			maxlength = r-l+1,costLen = 1e9;
		}
		if(maxlength == r-l+1){
			costLen = min(costLen,c);
		}
		int ans = costl + costr;
		if(maxlength == maxr-minl+1){
			ans = min(ans,costLen);
		}
		cout << ans << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
