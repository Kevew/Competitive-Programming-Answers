#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> a(n*m);
    for(int i = 0;i < n*m;i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n*m;i++){
        a[i].second = -a[i].second;
	}
    int ans = 0;
    for(int i = 0;i < n;i++){
        sort(a.begin()+(m*i),a.begin()+(m*i+m));
        for(int j = 0;j < m;j++){
            for(int k = 0;k < j;k++){
                if(a[i*m+k].second > a[i*m+j].second){
                	ans++;
				}
            }
        }
    }
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
   	int t;
   	cin >> t;
   	while(t--){
   		solve();
    }
}
