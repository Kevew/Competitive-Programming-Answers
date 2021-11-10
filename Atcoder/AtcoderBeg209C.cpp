#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

long long arr[200010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	long long lowest = 0;
	long long ans = 1;
	for(int i = 0;i < n;i++){
		if(arr[i] > lowest){
			ans = (ans*(arr[i]-lowest)%MOD)%MOD;
			lowest++;
		}else{
			cout << "0" << endl;
			return 0;
		}
	}
	cout << ans << endl;
}
