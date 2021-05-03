#include <bits/stdc++.h>
using namespace std;

void solve(){
	map<int,int> general;
	int n,l,r;
	cin >> n >> l >> r;
	int temp;
	for(int i = 0;i < l;i++){
		cin >> temp;
		general[temp] += 1;
	}
	for(int i = 0;i < r;i++){
		cin >> temp;
		general[temp] -= 1;
	}
	multiset<int,greater<int>> checking;
	
	if(l >= r){
		for(auto i:general){
			if(i.second > 0){
				checking.insert(i.second);
			}
		}	
	}else if(r > l){
		for(auto i:general){
			if(i.second < 0){
				checking.insert(abs(i.second));
			}
		}
	}
	int ans = 0;
	for(int i = 0;i < (max(l,r)-min(l,r))/2;i++){
		if(*checking.begin() >= 2){
			temp = *checking.begin();
			checking.erase(checking.begin());
			temp -= 2;
			checking.insert(temp);
			ans++;
		}else{
			checking.erase(checking.begin());
			ans++;
		}
	}
	while(!checking.empty()){
		ans += *checking.begin();
		checking.erase(checking.begin());
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
