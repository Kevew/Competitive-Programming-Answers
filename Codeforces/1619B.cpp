#include <bits/stdc++.h>
using namespace std;

set<int> like;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 1;i < 100000;i++){
		if(i*i <= 1e9){
			like.insert(i*i);
		}else{
			break;
		}
	}
	for(int i = 1;i < 100000;i++){
		if(i*i*i <= 1e9){
			like.insert(i*i*i);
		}else{
			break;
		}
	}
	vector<int> liket;
	for(auto i:like){
		liket.push_back(i);
	}
	sort(liket.begin(),liket.end());
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 0;
		for(int i = 0;i < liket.size();i++){
			if(liket[i] <= n){
				ans++;
			}else{
				break;
			}
		}
		cout << ans << endl;
	}
}
