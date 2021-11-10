#include <bits/stdc++.h>
using namespace std;

int arr[21];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long ans = 1e18;
	for(int i = 0;i < (1<<n);i++){
		long long temp = 0;
		int curr = 0;
		for(int j = 0;j < n;j++){
			if(i&(1<<j)){
				temp ^= curr;
				curr = arr[j];
			}else{
				curr |= arr[j];
			}
		}
		temp ^= curr;
		ans = min(ans,temp);
	}
	cout << ans << endl;
}
