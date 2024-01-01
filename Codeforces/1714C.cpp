#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> ans;
	for(int i = 9;i > 0;i--){
		if(n-i > 0){
			ans.push_back(i);
			n -= i;
		}else{
			ans.push_back(n);
			break;
		}
	}
	for(int i = ans.size()-1;i >= 0;i--){
		cout << ans[i];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
