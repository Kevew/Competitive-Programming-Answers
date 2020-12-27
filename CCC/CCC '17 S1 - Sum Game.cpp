#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[100010];
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr1[i];
	}
	int temp;
	int a = 0,b = 0,ans = 0;
	for(int i = 0;i < n;i++){
		cin >> temp;
		a += arr1[i];
		b += temp;
		if(a == b){
			ans = i+1;
		}
	}
	cout << ans << endl;
}
