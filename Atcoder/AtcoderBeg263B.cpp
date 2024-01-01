#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n-1;i++){
		cin >> arr[i];
	}
	
	int cnt = 1;
	int pos = n-2;
	while(arr[pos] != 1){
		pos = arr[pos]-2;
		cnt++;
	}
	cout << cnt << endl;
}
