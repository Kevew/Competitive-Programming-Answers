#include <bits/stdc++.h>
using namespace std;

vector<int> food[4];
int n[4];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n[0] >> n[1] >> n[2] >> n[3];
	int a;
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < n[i];j++){
			cin >> a;
			food[i].push_back(a);
		}
	}
	vector<vector<vector<int>>> bad(3);
	int x, y;
	for(int i = 0;i < 3;i++){
		bad[i].resize(n[i+1]);
		int m;
		cin >> m;
		for(int j = 0;j < m;j++){
			cin >> x >> y;
			x--;
			y--;
			bad[i][y].push_back(x);
		}
	}
	
	vector<vector<int>> dp(4);
    dp[0] = food[0];
    for(int i = 0;i < 3;i++){
    	dp[i+1].resize(n[i+1]);
    	multiset<int> s;
    	for(int j = 0;j < n[i];j++){
    		s.insert(dp[i][j]);
		}
		
		for(int j = 0; j < n[i + 1];j++){
            for(auto k : bad[i][j]){
            	s.erase(s.find(dp[i][k]));
			}
            if(s.empty()){
            	dp[i + 1][j] = int(1e9);
			}else{
				dp[i + 1][j] = *s.begin() + food[i + 1][j];
			}
            for(auto k : bad[i][j]){
            	s.insert(dp[i][k]);
			}
        }
	}
	int ans = *min_element(dp[3].begin(), dp[3].end());
    if(ans >= 1e9)
        ans = -1;
    cout << ans << endl;
}
