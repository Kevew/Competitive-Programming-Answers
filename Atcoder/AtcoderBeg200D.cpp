#include <bits/stdc++.h>
using namespace std;

int arr[210];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	int cnt = min(n,8);
	vector<vector<int>> check(200,vector<int>(0));
	for(int i = 0;i < (1<<cnt);i++){
		int total = 0;
		vector<int> newone;
		for(int j = 0;j < cnt;j++){
			if(i&(1<<j)){
				newone.push_back(j+1);
				total += arr[j];
				total%=200;
			}
		}
		if(check[total].size() > 0){
			cout << "Yes" << endl;
			cout << check[total].size() << " ";
			for(int i = 0;i < check[total].size();i++){
				cout << check[total][i] << " ";
			}
			cout << endl;
			
			cout << newone.size() << " ";
			for(int i = 0;i < newone.size();i++){
				cout << newone[i] << " ";
			}
			cout << endl;
			return 0;
		}else{
			check[total] = newone;
		}
	}
	cout << "No" << endl;
}
