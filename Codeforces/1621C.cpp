#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> ans(n+1,-1);
	int rot = 0,addon;
	for(int i = 0;i < n;i++){
		if(ans[i+1] != -1){
			continue;
		}
		addon = 0;
		cout << "? " << i+1 << endl;
		addon++;
		int a;
		cin >> a;
		cout << "? " << i+1 << endl;
		addon++;
		int b;
		cin >> b;
		vector<int> temp;
		while(a != b){
			temp.push_back(b);
			cout << "? " << i+1 << endl;
			addon++;
			cin >> b;
		}
		temp.push_back(a);
		
		for(int j = rot;j < rot+temp.size();j++){
			ans[temp[(j+temp.size()-1)%temp.size()]] = temp[j%temp.size()];
		}
		rot += addon;
	}
	
	cout << "! ";
	for(int i = 1;i <= n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

/*

4 2 1 3
1 2 3 4
4 2 1 3
3 2 4 1
1 2 3 4
*/
