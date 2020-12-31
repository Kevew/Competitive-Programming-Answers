#include <bits/stdc++.h>
using namespace std;

int arr[50][50];

set<vector<int>> possible[50];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> arr[i][j];
		}
	}
	vector<int> first;
	for(int i = 0;i < m;i++){
		first.push_back(arr[0][i]);
	}
	possible[0].insert(first);
	for(int i = 1;i < n;i++){
		for(auto temp: possible[i-1]){
			vector<int> test;
			for(int j = 0;j < m;j++){
				if(arr[i][j] == temp[j]){
					test.push_back(0);
				}else{
					test.push_back(1);
				}
			}
			possible[i].insert(test);
			possible[i].insert(test);
		}
		first.erase(first.begin(),first.end());
		for(int j = 0;j < m;j++){
			first.push_back(arr[i][j]);
		}
		possible[i].insert(first);
	}
	cout << possible[n-1].size() << endl;
}
