#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int ans = 0,k = 1;
	while(a.size() > 0){
		auto i = lower_bound(a.begin(),a.end(),k+1);
		if(i != a.begin()){
			if(i == a.end()){
				a.pop_back();
			}else{
				int curr = i-a.begin();
				curr--;
				a.erase(a.begin() + curr);
			}
			ans++;
			k++;
			if(a.size() > 0 && a[0] == 1){
				a.erase(a.begin());
				continue;
			}else{
				break;
			}
		}else{
			break;
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
