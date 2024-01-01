#include <bits/stdc++.h>
using namespace std;

map<int,queue<int>> arr;
int ans[20000];

int main(){
	int n,t;
	cin >> n >> t;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		temp--;
		arr[i].push(temp);
	}
	vector<vector<int>> addon(n);
	for(int i = 0;i < t;i++){
		for(int j = 0;j < n;j++){
			addon[j].clear();
		}
		for(int j = 0;j < n;j++){
			if(!arr[j].empty()){
				temp = arr[j].front();
				arr[j].pop();
				ans[j] = temp;
				addon[temp].push_back(j);
			}
		}
		for(int j = 0;j < n;j++){
			for(int x = 0;x < addon[j].size();x++){
				arr[j].push(addon[j][x]);
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		cout << ans[i]+1;
		if(i != n-1){
			cout << " ";
		}
	}
	cout << "\n";
}
