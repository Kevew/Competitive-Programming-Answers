#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main(){
	int n,m;
	cin >> n >> m;
	int maximum = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		maximum = max(arr[i],maximum);
	}
	int pos = 0;
	for(int i = 0;i < m;i++){
		cin >> pos;
		if(arr[pos-1] == maximum){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
