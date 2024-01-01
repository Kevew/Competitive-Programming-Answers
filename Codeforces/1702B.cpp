#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	vector<char> curr;
	cin >> a;
	int cnt = 1;
	for(int i = 0;i < a.size();i++){
		if(curr.size() < 3){
			bool check = false;
			for(int j = 0;j < curr.size();j++){
				if(a[i] == curr[j]){
					check = true;
				}
			}
			if(!check){
				curr.push_back(a[i]);
			}
		}else{
			bool check = false;
			for(int j = 0;j < 3;j++){
				if(a[i] == curr[j]){
					check = true;
				}
			}
			if(!check){
				cnt++;
				curr.erase(curr.begin(),curr.end());
				curr.push_back(a[i]);
			}
		}
	}
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
