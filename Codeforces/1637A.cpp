#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> notsorted,sorted;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		notsorted.push_back(temp);
		sorted.push_back(temp);
	}
	bool check = false;
	sort(sorted.begin(),sorted.end());
	for(int i = 0;i < n;i++){
		if(sorted[i] != notsorted[i]){
			check = true;
			break;
		}
	}
	if(check){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
