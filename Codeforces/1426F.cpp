#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int arr[3];

int main(){
	int n;
	cin >> n;
	int addon = 1;
	string a;
	cin >> a;
	for(int i = 0;i < n;i++){
		if(a[i] == 'a') arr[0] = (arr[0]+addon)%mod;
		if(a[i] == 'b') arr[1] = (arr[1]+arr[0])%mod;
		if(a[i] == 'c') arr[2] = (arr[2]+arr[1])%mod;
		if(a[i] == '?'){
			arr[2] = (arr[2]*3LL+arr[1])%mod;
			arr[1] = (arr[1]*3LL+arr[0])%mod;
			arr[0] = (arr[0]*3LL+addon)%mod;
			addon = (addon*3LL)%mod;
		}
	}
	cout << arr[2] << endl;
}
