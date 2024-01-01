#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,h,x;
	cin >> n >> h >> x;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int ans = -1;
	for(int i = 0;i < n;i++){
		if(arr[i] + h >= x){
			ans = i+1;
			break;
		}
	}
	cout << ans << endl;
}
