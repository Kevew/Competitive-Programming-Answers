#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int total = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == '*'){
			total++;
		}
	}
	
	int cur = -1;
	int pos = -1;
	for(int i = 0;i < n;i++){
		if(a[i] == '*'){
			cur++;
			if(cur == total/2){
				pos = i;
				break;
			}
		}
	}
	long long ans = 0;
	cur = pos-total/2;
	for(int i = 0;i < n;i++){
		if(a[i] == '*'){
			ans += abs(cur - i);
			cur++;
		}
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
