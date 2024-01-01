#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin >> n >> q;
	vector<vector<int>> arr(n);
	for(int i = 0;i < n;i++){
		int m;
		cin >> m;
		for(int j = 0;j < m;j++){
			int a;
			cin >> a;
			arr[i].push_back(a);
		}
	}
	while(q--){
		int a,b;
		cin >> a >> b;
		cout << arr[a-1][b-1] << endl;
	}
}
