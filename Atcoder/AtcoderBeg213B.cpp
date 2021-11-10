#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		arr[i] = {a,i+1};
	}
	
	sort(arr.begin(),arr.end());
	cout << arr[arr.size()-2].second << endl;
}
