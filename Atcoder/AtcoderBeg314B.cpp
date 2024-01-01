#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int val[101];
	vector<int> arr[101];
	for(int i = 0;i <= 100;i++){
		val[i] = 50;
		arr[i].clear();
	}
	for(int i = 0;i < n;i++){
		int c;
		cin >> c;
		for(int j = 0;j < c;j++){
			int a;
			cin >> a;
			if(val[a] > c){
				val[a] = c;
				arr[a].clear();
				arr[a].push_back(i+1);
			}else if(val[a] == c){
				arr[a].push_back(i+1);
			}
		}
	}
	int x;
	cin >> x;
	cout << arr[x].size() << endl;
	for(auto i: arr[x]){
		cout << i << " ";
	}
}
