#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
	cin >> n >> m;
    vector<int> ans;
    for(int i = 0;i < n;i++){
    	for(int j = 0;j < m;j++){
    		ans.push_back(max(i,n-(i+1))+max(j,m-(j+1)));
		}
	}
	sort(ans.begin(),ans.end());
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
