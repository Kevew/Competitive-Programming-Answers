#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = m;i < n;i++){
		cout << arr[i] << " ";
	}
	for(int i = 0;i < min(m,n);i++){
		cout << "0 ";
	}
}
