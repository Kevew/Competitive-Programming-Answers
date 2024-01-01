#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	set<int> cnt[n];
	for(int i = 0;i < m;i++){
		int k;
		cin >> k;
		vector<int> arr;
		for(int j = 0;j < k;j++){
			int a;
			cin >> a;
			arr.push_back(a);
		}
		for(int j = 0;j < k;j++){
			for(int x = 0;x < k;x++){
				if(x == j){
					continue;
				}else{
					cnt[arr[j]-1].insert(arr[x]);
				}
			}
		}
	}
	for(int i = 0;i < n;i++){
		if(cnt[i].size() != n-1){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
