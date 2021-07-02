#include <bits/stdc++.h>
using namespace std;

int arr[310];

void check(){
	int n;
	cin >> n;
	bool fail = false;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i] < 0){
			fail = true;
		}
	}
	if(fail){
		cout << "NO" << endl;
		return;
	}
	sort(arr,arr+n);
	cout << "YES" << endl;
	cout << arr[n-1]+1 << endl;
	for(int i = 0;i < arr[n-1]+1;i++){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
