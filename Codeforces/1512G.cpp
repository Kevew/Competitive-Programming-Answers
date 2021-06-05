#include <bits/stdc++.h>
using namespace std;

int arr[10000010],ans[10000010];

int main(){
	int t;
	cin >> t;
	for(int i = 1;i <= 10000000;i++){
		ans[i] = 1e9;
	}
	for(int i = 1;i <= 10000000;i++){
		for(int j = i;j <= 10000000;j+=i){
			arr[j] += i;
		}
		if(arr[i] <= 10000000){
			ans[arr[i]] = min(ans[arr[i]],i);
		}
	}
	
	
	while(t--){
		int n;
		cin >> n;
		if(ans[n] == 1e9){
			ans[n] = -1;
		}
		cout << ans[n] << endl;
	}
}
