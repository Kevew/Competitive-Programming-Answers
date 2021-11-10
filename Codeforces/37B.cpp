#include <bits/stdc++.h>
using namespace std;

bool used[1010];

int main(){
	int n,health,REG;
	cin >> n >> health >> REG;
	int a,b;
	vector<pair<int,int>> scrolls;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		a = a*health;
		scrolls.push_back({a,b});
	}
	int HP = health,ATK = 0;
	int timer = 1;
	vector<pair<int,int>> ans;
	while(true){
		HP -= ATK;
		HP += REG;
		HP = min(HP,health);
		if(HP <= 0){
			cout << "YES" << endl;
			cout << timer-1 << " " << ans.size() << endl;
			for (auto sc:ans) {
				cout << sc.first << " " << sc.second + 1 << endl;
			}
			break;
		}
		
		int cur = -1;
		for (int i = 0; i < n; ++i) {
			if (!used[i] && scrolls[i].first >= HP*100 && (cur < 0 || scrolls[cur].second < scrolls[i].second)) {
				cur = i;
			}
		}
		if(cur < 0 && ATK <= REG){
			cout << "NO" << endl;
			return 0;
		}
		if(cur >= 0){
			ans.push_back({timer-1,cur});
			ATK += scrolls[cur].second;
			used[cur] = true;
		}
		timer++;
	}
}
