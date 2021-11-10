#include <bits/stdc++.h>
using namespace std;

int ans[200010];
map<int,vector<int>> repeat;
vector<int> replacingvec;

void solve(){
	repeat.clear();
	replacingvec.clear();
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> ans[i];
		repeat[ans[i]].push_back(i+1);
	}
	for(int i = 1;i <= n;i++){
		if(repeat[i].size() > 1){
			replacingvec.push_back(i);
		}
	}
	int finaltemp = 0;
	for(int i = 1;i <= n;i++){
		if(repeat[i].size() == 0){
			int pos = 0;
			for(int j = 0;j < replacingvec.size();j++){
				bool breaking = false;
				for(int x = 0;x < repeat[replacingvec[j]].size();x++){
					if(repeat[replacingvec[j]][x] != i){
						pos = repeat[replacingvec[j]][x];
						repeat[replacingvec[j]].erase(repeat[replacingvec[j]].begin()+x);
						breaking = true;
						if(repeat[replacingvec[j]].size() == 1){
							replacingvec.erase(replacingvec.begin()+j);
						}
						break;
					}
				}
				if(breaking){
					break;
				}
			}
			ans[pos-1] = i;
			finaltemp++;
		}
	}
	cout << n-finaltemp << endl;
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
