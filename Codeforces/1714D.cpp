#include <bits/stdc++.h>
using namespace std;


void solve(){
	string a;
	cin >> a;
	int n;
	cin >> n;
	
	vector<string> str;
	for(int i = 0;i < n;i++){
		string b;
		cin >> b;
		str.push_back(b);
	}
	vector<int> arr(a.size(),-1);
	vector<int> newarr(a.size(),-1);
	for(int i = 0;i < a.size();i++){
		int pos = 0;
		for(auto j: str){
			int temp = j.size();
			if((i-temp) >= -1){
				bool check = false;
				for(int x = 0;x < j.size();x++){
					if(j[j.size()-x-1] != a[i-x]){
						check = true;
					}
				}
				if(!check){
					if(arr[i] < temp){
						arr[i] = temp;
						newarr[i] = pos;
					}
				}
			}
			pos++;
		}
	}
	
	vector<pair<int,int>> ans;
	vector<int> check(a.size(),-1);
	for(int i = 0;i < a.size();i++){
		if(check[i] == -1){
			int pos = -1;
			for(int j = i;j < a.size();j++){
				if(j-(arr[j]-1) <= i){
					pos = j;
				}
			}
			if(pos == -1){
				cout << "-1" << endl;
				return;
			}else{
				for(int j = i;j <= pos;j++){
					check[j] = 1;
				}
				ans.push_back({newarr[pos]+1,pos-arr[pos]+2});
			}
		}
	}
	bool finalcheck = false;
	for(auto i: check){
		if(i == -1){
			finalcheck = true;
		}
	}
	if(finalcheck){
		cout << "-1" << endl;
		return;
	}
	cout << ans.size() << endl;
	for(auto i: ans){
		cout << i.first << " " << i.second << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
