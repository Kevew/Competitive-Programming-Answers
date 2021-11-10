#include <bits/stdc++.h>
using namespace std;

int arr[200010],ans[200010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int curr = 1;
	for(int i = 0;i < n;i++){
		ans[arr[i]-1] = curr;
		curr++;
	}
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}
