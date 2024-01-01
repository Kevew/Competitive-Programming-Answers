#include <bits/stdc++.h>
using namespace std;

map<string, int> check;

int main(){
	int n,m;
	cin >> n >> m;
	string arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	string a[m];
	for(int i = 0;i < m;i++){
		cin >> a[i];
	}
	int b[m+1];
	for(int i = 0;i < m+1;i++){
		cin >> b[i];
	}
	for(int i = 0;i < m;i++){
		check[a[i]] = b[i+1];
	}
	int ans = 0;
	for(int i = 0; i< n;i++){
		if(check.find(arr[i]) != check.end()){
			ans += check[arr[i]];
		}else{
			ans += b[0];
		}
	}
	cout << ans << endl;
}
